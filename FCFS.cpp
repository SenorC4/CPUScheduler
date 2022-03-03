//Author Luke LeCain
//Scheduler project OS

#include <iostream>

using namespace std;

void fcfsScheduler(int arrival[], int burst[], int priority[], int length){
	cout << "FCFS: \n";
	//for(int i = 0; i < length; i++){
	//	cout << "Arrival time: " << arrival[i] << " Burst: " << burst[i] << " Priority: " << priority[i] << endl;
	//}

	

	//if arrival time > last process end time start time = arrival time
	
	cout << "Average wait time: ";
	cout << "Shortest wait time: 0";
	cout << "Longest wait time: ";
	cout << "Average turn around time: ";
	cout << "Throughput: " << length;
	
}
