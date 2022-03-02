#include <iostream>
#include "SJF.h"
#include "FCFS.h"

using namespace std;

int main()
{
	int processNum;
	cout << "Please enter the number of processes to be considered.";
	cin >> processNum;
	int throughPutTime;
	cout << "Please enter the throughput time for testing";
	cin >> throughPutTime;
	int arrivalTimes[processNum];
	int burstTimes[processNum];
	int priorities[processNum];
	for(int i = 0; i < processNum; i++)
	{
		int arrival,burst,priority;
		cin >> arrival >> burst >> priority;
		arrivalTimes[i] = arrival;
		burstTimes[i] = burst;
		priorities[i] = priority;
	}
	sjfScheduler(arrivalTimes, burstTimes, priorities, processNum);
	fcfsScheduler(arrivalTimes, burstTimes, priorities, processNum);
}
