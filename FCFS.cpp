//Author Luke LeCain
//Scheduler project OS

#include <iostream>
#include <vector>

using namespace std;

void fcfsScheduler(int arrival[], int burst[],  int length, int throughPutTime){

	int longest = 0;
	double aWt = 0;
	double atat = 0;
	int thru = 0;

	cout << "This is the FCFS scheduler:" << endl;

	//vector to hold start times
	vector<int> startTimes(length);
	
	//start time for process 0 is always 0
	startTimes.push_back(0);

	//calculate start times for all processes by adding the last start time plus the last burst time
	for(int i = 1; i < length; i++){
		if(arrival[i] < (arrival[i-1] + burst[i-1])){
			startTimes.at(i) = (startTimes.at(i-1) + burst[i-1]);
		//if arrival is not less than last arrival + last burst, start at arrival time
		}else{
			startTimes.at(i) = (arrival[i]);
		}

		//cout << "Start : " << i << " " << startTimes.at(i);
	}
	
	//vector for holding wait times
	vector<int> waitTimes(length);
	
	//wait time for process 0 is always 0
	waitTimes.push_back(0);

	//CALCULATE WAIT TIMES by adding the start and burst of the last process and subtracting the arrival time
	for(int i = 1; i < length; i++){
		waitTimes.at(i) = (startTimes.at(i-1) + burst[i-1] - arrival[i]);
		
		//used to negate idle time (if idle wait is 0)
		if(waitTimes.at(i) < 0){
			waitTimes.at(i) = 0;
		}

	}

	//calc longest wait by checking to see if the next wait time is longest than the current longest wait
	for(int i = 0; i < length; i++){
		//cout<<"Wait for " << i << " is " << waitTimes.at(i);
		if(waitTimes.at(i) > longest){
			longest = waitTimes.at(i);
		}
		//add up all wait times to get average wait
		aWt += waitTimes.at(i);
	}


	//divide total amount of wait by number of processes
	aWt = aWt/length;

	//average turnaround time calculated by adding the wait time by burst time then dividing by number of processes
	for(int i = 0; i < length; i++){
		int temp = waitTimes.at(i) + burst[i];
		atat += temp;
	}
	
	//divide total time by number of processes
	atat = atat / length;

	//calculate throuput by checking if each processes start time + burst time is less than the throughput time
	for(int i = 0; i < length; i++){
		if((startTimes.at(i) + burst[i]) < throughPutTime){
			thru++;
		}
	}

	//print out the calculated results
	cout << "The throughput is: " << thru << endl;
	cout << "The shortest wait time is 0" << endl;
	cout << "The longest wait time is " << longest << endl;
	cout << "The average wait time is " << aWt << endl;
	cout << "The average turnaround time is " << atat << endl;

	cout << endl;
}
