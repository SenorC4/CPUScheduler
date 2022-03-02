//Author Luke LeCain
//Scheduler project OS

#include <iostream>

using namespace std;

void fcfsScheduler(int arrival[], int burst[], int priority[]){
	cout << "fcfs works";
	int length = sizeof(arrival) + 1;
	for(int i = 0; i < length; i++){
		cout << "Arrival time: " << arrival[i] << " Burst: " << burst[i] << " Priority: " << priority[i] << endl;
	}
}
