#include <iostream>
#include <random>
#include <time.h>

int i = 1;

void sleep(float seconds) {
	int milli_seconds = 1000 * seconds;
	clock_t start_time = clock();
	while(clock() < start_time + milli_seconds);
}

void ipGenerator() {
	int flow1 = rand() % 255 + 1;
	int flow2 = rand() % 255 + 1;
	int flow3 = rand() % 255 + 1;
	int flow4 = rand() % 255 + 1;
	sleep(0.5);
	std::cout << "\n" << i++ << ") " << "ip: " << flow1 << "." << flow2 << "." << flow3 << "." << flow4;
}

int main() {
	system("color 0a");
	for (;;) {
		ipGenerator();
	}	
	return 0;
}
