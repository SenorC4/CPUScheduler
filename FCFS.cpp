#include <iostream>
using namespace std;
<<<<<<< HEAD

void fcfsScheduler(int arrival[], int burst[], int priority[], int length){
	cout << "fcfs works";
	for(int i = 0; i < length; i++){
		cout << "Arrival time: " << arrival[i] << " Burst: " << burst[i] << " Priority: " << priority[i] << endl;
=======
void fcfsScheduler(int* arrival, int* burst, int* priority)
{
	cout << "fcfs works";
	for (int i = 0; i < sizeof(arrival); i++)
	{
		cout << "Arrival time: " << arrival[i] << " Burst time: " << burst[i] << " Priority: " << priority[i] << endl;
>>>>>>> 9aecdaeb32431dd1e0aba0b5237825ff5af868be
	}
}
