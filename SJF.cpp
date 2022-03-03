#include <iostream>
using namespace std;

<<<<<<< HEAD
void sjfScheduler(int arrival[], int burst[], int priority[], int length)
{
	cout << "This is the shortest job first scheduler" << endl;
	for (int i = 0; i < length; i++)
	{
		cout << "Arrival Time: " << arrival[i] << "    " << "Burst Time: " << burst[i] << "    " << "Priority: "  << priority[i]  << endl;
=======
void sjfScheduler(int* arrival, int* burst, int* priority)
{
	cout << "This is the shortest job first scheduler" << endl;
	int length = sizeof(arrival)/sizeof(arrival[0]);
	for (int i = 0; i < length; i++)
	{
		cout << arrival[i] << "	   " << burst[i] << "    " << priority[i] << endl;
>>>>>>> 9aecdaeb32431dd1e0aba0b5237825ff5af868be
	}
}
