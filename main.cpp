#include <iostream>
#include "SJF.h"
#include "FCFS.h"
using namespace std;

int main()
{
	int processNum;
	cout << "Please enter the number of processes to be considered: ";
	cin >> processNum;
	int throughPutTime;
	cout << "Please enter the throughput time for testing: ";
	cin >> throughPutTime;
	int arrivalTimes[processNum];
	int burstTimes[processNum];
	for(int i = 0; i < processNum; i++)
	{
		cout << "Enter the processes arrival time followed by its burst time: ";
		int arrival,burst;
		cin >> arrival >> burst;
		arrivalTimes[i] = arrival;
		burstTimes[i] = burst;
	}
	cout << endl;
	fcfsScheduler(arrivalTimes, burstTimes, processNum, throughPutTime);
	sjfScheduler(arrivalTimes, burstTimes, processNum, throughPutTime);
	cout << endl;
	//fcfsScheduler(arrivalTimes, burstTimes, priorities, processNum);
}
