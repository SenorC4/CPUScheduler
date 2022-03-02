#include <iostream>
using namespace std;
void fcfsScheduler(int* arrival, int* burst, int* priority)
{
	cout << "fcfs works";
	for (int i = 0; i < sizeof(arrival); i++)
	{
		cout << "Arrival time: " << arrival[i] << " Burst time: " << burst[i] << " Priority: " << priority[i] << endl;
	}
}
