//This is the algorithm for the Shortest Job First
#include <iostream>
using namespace std;

void sjfScheduler(int arrival[], int burst[], int priority[])
{
	cout << "This is the shortest job first scheduler" << endl;
	int length = sizeof(arrival);
	for (int i = 0; i < 3; i++)
	{
		cout << arrival[i] << "    " << burst[i] << "    " << priority[i]  << endl;
	}
}
