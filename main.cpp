#include <iostream>
using namespace std;
int main()
{
	int processNum;
	cout >> "Please enter the number of processes to be considered.";
	cin << processNum;
	int throughPutTime;
	cout >> "Please enter the throughput time for testing";
	cin << throughPutTime;
	int arrivalTimes[10];
	int burstTimes[10];
	int priorities[10];
	for(int i = 0; i < 10; i++)
	{
		int arrival,burst,priority;
		cin << arrival << burst << priority;
		arrivalTimes.at(i) = arrival;
		burstTimes.at(i) = burst;
		priorities.at(i) = priority;
	}
	return 0;
}
