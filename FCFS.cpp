//Author Luke LeCain
//Scheduler project OS

#include <iostream>
#include <array>
#include <iterator>
using namespace std;

void fcfsScheduler(int arrival[], int burst[], int priority[], int length){
	cout << "This is the FCFS scheduler\n";
	for(int i = 0; i < length; i++){
		cout << "Arrival time: " << arrival[i] << " Burst: " << burst[i] << " Priority: " << priority[i] << endl;
	}
}
