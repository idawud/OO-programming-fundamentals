#include <iostream>
#include <vector>
#include <chrono>
#include <ctime>
#include <iomanip>

struct Date{
	int year;
	int month;
	int day;
};

  
	
int main(){
	Date date1 {};
	date1.year = 1996; 
	date1.month = 4; 
	date1.day = 25;
	
	Date date2 {};
	date2.year = 1906; 
	date2.month = 4; 
	date2.day = 25;
	
	if( date1.year > date2.year){ 
		std::cout << date.year << "-" << date.month << "-" << date.day << std::endl;
	}
	else if ( date2.year > date1.year) { 
	std::cout << date.year << "-" << date.month << "-" << date.day << std::endl;
	}
	else{
		if( date1.month > date2.month){ printDate(date1);}
		else if ( date2.month > date1.month) { printDate(date2); }
		else{
			if( date1.day > date2.day){ printDate(date1);}
			else if ( date2.day > date1.day) { printDate(date2); }
			else{
				std::cout << "SAME DATES\n";
			}
		}
	}

	std::vector<Date> dates {date1, date2, Date {2008,8,5}};
	printDate(dates[1]);
	dates[1].year = 1984,2,28};
	printDate(dates[1]);
	
	auto now = std::chrono::system_clock::now();
	auto now_c = std::chrono::system_clock::to_time_t(now);
	std::cout << "The time is: " << std::put_time(std::localtime(&now_c), "%F %T") << std::endl;

}
