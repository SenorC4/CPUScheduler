//Author Luke LeCain
//Scheduler project OS

#include <iostream>

using namespace std;

void fcfsScheduler(int arrival[], int burst[],  int length){
	cout << "fcfs works" << endl;
	for(int i = 0; i < length; i++){
		cout << "Arrival time: " << arrival[i] << " Burst: " << burst[i] << endl;
	}
}
