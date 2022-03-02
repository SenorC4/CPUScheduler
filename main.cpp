#include <iostream>
using namespace std;
int main()
{
	int processNum;
	cout << "Please enter the number of processes to be considered.";
	cin >> processNum;
	int throughPutTime;
	cout << "Please enter the throughput time for testing";
	cin >> throughPutTime;
	int* arrivalTimes = new int[10];
	int* burstTimes = new int[10];
	int* priorities = new int[10];
	for(int i = 0; i < processNum; i++)
	{
		int arrival,burst,priority;
		cin >> arrival >> burst >> priority;
		arrivalTimes[i] = arrival;
		burstTimes[i] = burst;
		priorities[i] = priority;
	}
	return 0;
}
