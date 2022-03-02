#include <iostream>
#include "SJF.h"
using namespace std;

int main()
{
	int processNum;
	cout << "Please enter the number of processes to be considered.";
	cin >> processNum;
	int throughPutTime;
	cout << "Please enter the throughput time for testing";
	cin >> throughPutTime;
	int arrivalTimes[3];
	int burstTimes[3];
	int priorities[3];
	for(int i = 0; i < 3; i++)
	{
		int arrival,burst,priority;
		cin >> arrival >> burst >> priority;
		arrivalTimes[i] = arrival;
		burstTimes[i] = burst;
		priorities[i] = priority;
	}
	sjfScheduler(arrivalTimes, burstTimes, priorities);
}
