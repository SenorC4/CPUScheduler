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
	int endTime = arrival[length] + burst[length];

	cout << "This is the FCFS scheduler:" << endl;

	//show times and burst
	//for(int i = 0; i < length; i++){
	//	cout << "Arrival time: " << arrival[i] << " Burst: " << burst[i] << endl;
	//x}

	//starttimes
	vector<int> startTimes(length);
	startTimes.push_back(0);

	for(int i = 1; i < length; i++){
		if(arrival[i] < (arrival[i-1] + burst[i-1])){
			startTimes.at(i) = (arrival[i-1] + burst[i-1]);
		}else{
			startTimes.at(i) = (arrival[i]);
		}
	}

	vector<int> waitTimes(length);
	waitTimes.push_back(0);

	//CALCULATE WAIT TIMES
	for(int i = 1; i < length; i++){
		waitTimes.at(i) = (arrival[i] + burst[i] - arrival[i]);
	}

	//calc longest wait
	for(int i = 0; i < length; i++){
		//cout<<"Wait for " << i << " is " << waitTimes.at(i);
		if(waitTimes.at(i) > longest){
			longest = waitTimes.at(i);
		}
		aWt += waitTimes.at(i);
	}


	//calcute average wait time
	aWt = aWt/length;

	//average turnaround time calc
	for(int i = 0; i < length; i++){
		int temp = waitTimes.at(i) + burst[i];
		atat += temp;
	}

	atat = atat / length;

	//calculate throuput
	for(int i = 0; i < length; i++){
		if((startTimes.at(i) + burst[i]) < throughPutTime){
			thru++;
		}
	}

	//print out the results
	cout << "The throuput is: " << thru << endl;
	cout << "The shortest wait time is 0" << endl;
	cout << "The longest wait time is " << longest << endl;
	cout << "The average wait time is " << aWt << endl;
	cout << "The average turnaround time is " << atat << endl;

	cout << endl;
}
