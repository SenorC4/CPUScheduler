//This is the algorithm for the Shortest Job First
#include <iostream>
using namespace std;

void sjfScheduler(int arrival[], int burst[], int priority[], int length)
{
	cout << "This is the shortest job first scheduler" << endl;
	for (int i = 0; i < length; i++)
	{
		cout << arrival[i] << "    " << burst[i] << "    " << priority[i]  << endl;
	}
}
