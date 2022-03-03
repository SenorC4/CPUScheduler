//Author Luke LeCain
//Scheduler project OS

#include <iostream>

using namespace std;

void fcfsScheduler(int arrival[], int burst[], int priority[], int length){
	cout << "fcfs works";
	for(int i = 0; i < length; i++){
		cout << "Arrival time: " << arrival[i] << " Burst: " << burst[i] << " Priority: " << priority[i] << endl;
	}
}
