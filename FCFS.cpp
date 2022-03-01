//Author Luke LeCain
//Scheduler project OS

#include <iostream>

using namespace std;

void fcfsScheduler(int arival[], int burst[], int priority[]){
	cout << "fcfs works";
	for(int i = 0; i < sizeof arival; i++){
		cout << "Arrival time: " << arival[i] << " Burst: " << burst[i] << " Priority: " << priority[i] << endl;
	}
}
