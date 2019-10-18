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


void printDate(Date date){
	std::cout << date.year << "-" << date.month << "-" << date.day << std::endl;
}

void printLaterDate(Date date1, Date date2){
	if( date1.year > date2.year){ printDate(date1);}
	else if ( date2.year > date1.year) { printDate(date2); }
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
}

	
int main(){
	Date birthday {1996,4,25};
	//birthday.year = 1996; //birthday.month = 4; //birthday.day = 25;
	
	Date anotherDate {2019, 5, 25};
	printLaterDate(birthday, anotherDate);

	std::vector<Date> dates {birthday, anotherDate, Date {2008,8,5}};
	printDate(dates[1]);
	dates[1] = {1984,2,28};
	printDate(dates[1]);
	
	auto now = std::chrono::system_clock::now();
	auto now_c = std::chrono::system_clock::to_time_t(now);
	std::cout << "The time is: " << std::put_time(std::localtime(&now_c), "%F %T") << std::endl;

}
