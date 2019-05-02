#include<iostream>
#include <chrono>
#include <thread>

using namespace std;

int main() {
	using namespace std::this_thread; // sleep_for, sleep_until
	using namespace std::chrono; // nanoseconds, system_clock, seconds

	sleep_for(nanoseconds(10));
	sleep_until(system_clock::now() + seconds(10));
	cout << "Talib";
	system("pause");
}