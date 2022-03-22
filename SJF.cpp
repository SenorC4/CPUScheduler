
//This is the algorithm for the Shortest Job First
#include <iostream>
#include <vector>
using namespace std;

/*This function is the shortest job first scheduler. This function takes in four parameters. The first two parameters are
parallel arrays, the first holds the arrival times for all the processes and the other holds the burst times for each process.
length is the amount of processes being considered and the throughputTImeSlice which is the time period we analyze for how
many processes run during it (the throughpu).*/
void sjfScheduler(int arrival[], int burst[], int length, int throughputTimeSlice)
{
	cout << "This is the shortest job first scheduler" << endl;

	//vector that will hold the wait times of each process
	vector<int> waitVec;
	waitVec.push_back(0);//the first processes wait time is always 0

	/*This for loop essentially just makes sure that each process is considered
	and are bubbled up. Essentailly it is used as a buffer to check that everything is
	scheduled correctly*/
	for (int h = 0; h < 30; h++)
	{

		/*Below is a nested for loop. I have used a nested for loop because when we consider a process
		we have to have reference to the original process. That original process in this case is the one located
		at i in the arrays, and the processes in wait are iterated over with j.*/
		for (int i = 1; i < length; i++)
		{
			for (int j = i; j < length - 1; j++)
			{
				/*This if statement determines if the process we are looking at is currently in wait
				,and if so, determine if there is a shorter process ahead of it that is in wait. The formula inside
				calculates wait by adding the arrival and burst of the i process and seeing if the arrival
				of the processes we are looking at is before that number.*/
				if (arrival[j] < (burst[i-1] + arrival[i-1]) && (arrival[j+1] < (burst[i-1] + arrival[i-1])))
				{
					/*This if statement checks if the process ahead that is in wait is shorter than
					our current process. If so we use temporary variables to flip the data between places in both the
					arrival and the burst array.*/
					if (burst[j] > burst[j+1])
					{
						int temp = arrival[j];
						arrival[j] = arrival[j+1];
						arrival[j+1] = temp;
						temp = burst[j];
						burst[j] = burst[j+1];
						burst[j+1] = temp;
					}
				}
			}
		}
	}

	//variable that holds the current wait value that we insert into the wait vector below
	int wait = 0;
	vector<int> vectorForThroughput;// vector that takes in the burst times that have previous idle times added to them
	vectorForThroughput.push_back(burst[0]);

	/*This for loop iterates through our newly scheduled arrays and gathers that wait time for each process and
	inserts it into the wait vector. The formula works by adding the previous processes arrival time, burst time, and previous wait time so we can
	subtract the current processes arrival time and find the wait time.*/
	for (int i = 1; i < length; i++)
	{
		wait = (arrival[i-1] + burst[i-1]) - arrival[i];
		wait += waitVec.at(i-1);
		if (wait < 1)//this catches no wait time, but also idle time if it is less than 0
		{
			wait = wait * -1;//multiplies the idle time by -1 to make it positive
			vectorForThroughput.push_back(wait + burst[i]);//as described in the block comment, this is the burst time for thorughput calculation
			wait = 0;//wait is returned to 0, becasue if there is idle time there is still no wait
		}
		else
		{
			vectorForThroughput.push_back(burst[i]);//if there is a wait, just inserts the burst time for throughput calculation
		}
		waitVec.push_back(wait);//adding the wait time to our wait vector
	}

	int shortestWait = 0;//shortest wait is always 0
	int longestWait = 0;//holds the longest wait from our wait vector
	//for loop that loops through our wait vector
	for (int i = 0; i < waitVec.size(); i++)
	{
		if (longestWait < waitVec.at(i))//sees if the current longest wait is shorter than item i in the vector
		{
			longestWait = waitVec.at(i);//if so it's the new longest wait
		}
	}

	double totalWait;//double variable for precise calculation for waits
	for (int i = 0; i < waitVec.size(); i++)
	{
		totalWait += waitVec.at(i);//adds all the waits together from our wait vector
	}
	if (totalWait < 0.001 || totalWait > 999999999)
	{
		totalWait = 0;
	}
	double averageWaitTime = totalWait/length;//finds the average of all waits
	double totalBurst;//sam double variable for precise calculation, but for bursts

	for (int i = 0; i < length; i++)
	{
		totalBurst += burst[i];//adds all bursts in the array
	}
	double averageTurnaroundTime = (totalBurst + totalWait)/length;//gets the average turnaround time by adding total burst with total waits and taking it over however many processes considered

	//variables that hold calculations for throughput and checking if the current time is less than or equal to the time slice given
	int throughputCheck = 0;
	int throughput = 0;

	//for loop that loops through our throughput vector
	for (int i = 0; i < vectorForThroughput.size(); i++)
	{
		throughputCheck += vectorForThroughput.at(i);//adds bursts (with idle times considered) to our checking time
		if (throughputCheck <= throughputTimeSlice)//check if the process could run within our timeslice
		{
			throughput++;//if so adds one to throughput
		}
	}
	

	cout << "The throughput is " << throughput << endl;
	cout << "The shortest wait time is " << shortestWait << endl << "The longest wait time is " << longestWait << endl;
	cout << "The average wait time is " << averageWaitTime << endl << "The average turnaround time is " << averageTurnaroundTime << endl;
}
