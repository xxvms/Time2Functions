// Time2Functions.cpp : Defines the entry point for the console application.
//

#include <iostream>

struct time
{
	int hours;
	int minutes;
	int seconds;

};
long HoursMinSec2Sec(int hours_, int minutes_, int seconds_);

int main()
{
	std::cout << "Please provide time in format hh:mm:ss" << std::endl;
	std::cout << "Hours: ";
	int hours;
	std::cin >> hours;
	std::cout << "Minutes: ";
	int minutes;
	std::cin >> minutes;
	std::cout << "Seconds: ";
	int seconds;
	std::cin >> seconds;

	std::cout << "Time confirmation: " << std::endl;
	std::cout << hours << ":" << minutes << ":" << seconds << std::endl;
	
	std::cout << HoursMinSec2Sec(hours, minutes, seconds) << std::endl;


	system("pause");
    return 0;
}
long HoursMinSec2Sec(int hours_, int minutes_, int seconds_)
{
	long totalSeconds = (hours_ * 3600) + (minutes_ * 60) + seconds_;	
	return totalSeconds;
}

