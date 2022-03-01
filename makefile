scheduler: main.o FCFS.o SJF.o 
	g++ main.o FCFS.o SJF.o -o scheduler
main.o: main.cpp
	g++ -c main.cpp
FCFS.o: FCFS.cpp
	g++ -c FCFS.cpp
SJF.o: SJF.cpp
	g++ -c SJF.cpp
clean:
	rm *.o scheduler
