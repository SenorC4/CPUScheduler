#include <iostream>
<<<<<<< HEAD
#include "SJF.h"
#include "FCFS.h"
=======
>>>>>>> 9aecdaeb32431dd1e0aba0b5237825ff5af868be
using namespace std;
int main()
{
	int processNum;
	cout << "Please enter the number of processes to be considered: ";
	cin >> processNum;
	int throughPutTime;
	cout << "Please enter the throughput time for testing: ";
	cin >> throughPutTime;
<<<<<<< HEAD
	int arrivalTimes[processNum];
	int burstTimes[processNum];
	int priorities[processNum];
=======
	int* arrivalTimes = new int[10];
	int* burstTimes = new int[10];
	int* priorities = new int[10];
>>>>>>> 9aecdaeb32431dd1e0aba0b5237825ff5af868be
	for(int i = 0; i < processNum; i++)
	{
	cout << "Enter the processes arrival time followed by its burst time and the finally its priority: ";
		int arrival,burst,priority;
		cin >> arrival >> burst >> priority;
		arrivalTimes[i] = arrival;
		burstTimes[i] = burst;
		priorities[i] = priority;
	}
<<<<<<< HEAD
	cout << endl;
	sjfScheduler(arrivalTimes, burstTimes, priorities, processNum);
	cout << endl;
	fcfsScheduler(arrivalTimes, burstTimes, priorities, processNum);
=======
	return 0;
>>>>>>> 9aecdaeb32431dd1e0aba0b5237825ff5af868be
}
