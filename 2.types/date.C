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
	std::cout << "\nProblem 1:\n";
	Date date1 {};

	std::cout << "\nProblem 2:\n";
	date1.year = 1996; 
	date1.month = 4; 
	date1.day = 25;
	
	std::cout << "\nProblem 3:\n";
	Date date2 {};
	date2.year = 1906; 
	date2.month = 4; 
	date2.day = 25;
	
	if( date1.year > date2.year){ 
		std::cout << date1.year << "-" << date1.month << "-" << date1.day << std::endl;
	}
	else if ( date2.year > date1.year){ 
		std::cout << date2.year << "-" << date2.month << "-" << date2.day << std::endl;
	}
	else{
		if( date1.month > date2.month){ 
			std::cout << date1.year << "-" << date1.month << "-" << date1.day << std::endl;
		}
		else if ( date2.month > date1.month) {
			std::cout << date2.year << "-" << date2.month << "-" << date2.day << std::endl;
		}
		else{
			if( date1.day > date2.day){
				std::cout << date1.year << "-" << date1.month << "-" << date1.day << std::endl;
			}
			else if ( date2.day > date1.day){
				std::cout << date2.year << "-" << date2.month << "-" << date2.day << std::endl;
			}
			else{
				std::cout << "SAME DATES\n";
			}
		}
	}
	
	std::cout << "\nProblem 4:\n";
	Date date3 {};
	date3.year = 2008; 
	date3.month = 8; 
	date3.day = 5;
 
	std::vector<Date> dates {date1, date2, date3}; 
	std::cout << dates[1].year << "-" << dates[1].month << "-" << dates[1].day << std::endl;

	std::cout << "\nProblem 5:\n";
	dates[1].year = 1984;
	dates[1].month = 2;
	dates[1].day = 28; 
	std::cout << dates[1].year << "-" << dates[1].month << "-" << dates[1].day << std::endl;

	
	std::cout << "\nProblem 6:\n";
	Date *datePtr = &date1;
	datePtr->year = 1997;
	std::cout << date1.year << "-" << date1.month << "-" << date1.day << std::endl;

	std::cout << "\nProblem 7:\n";
	auto now = std::chrono::system_clock::now();
	auto now_c = std::chrono::system_clock::to_time_t(now);
	std::cout << "The time now is: " << std::put_time(std::localtime(&now_c), "%F %T") << std::endl;
}
