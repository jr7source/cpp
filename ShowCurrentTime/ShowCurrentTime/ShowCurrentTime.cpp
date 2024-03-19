// ShowCurrentTime.cpp : This file contains the 'main' function. Program execution begins and ends there.
// static_cast<int>(identifier);

#include <iostream>
#include <ctime>
 using namespace std;

 int main()
 {
 // Obtain the total seconds since the midnight, Jan 1, 1970

	 double d = 4.5;
	 int i = static_cast<int>(d); // i becomes 4, but d is unchanged
	 
	 int totalSeconds = time(0);
	
		 // Compute the current second in the minute in the hour
		 int currentSecond = totalSeconds % 60;
	
		 // Obtain the total minutes
		 int totalMinutes = totalSeconds / 60;
	
		 // Compute the current minute in the hour
	 int currentMinute = totalMinutes % 60;
	
		 // Obtain the total hours
		 int totalHours = totalMinutes / 60;
	
		 // Compute the current hour
		 int currentHour = totalHours % 24;
	
		 // Display results
		 cout << "Current time is " << currentHour + 1 << ":"
		 << currentMinute << ":" << currentSecond << " GMT" << endl;
	
		 return 0;
	 }