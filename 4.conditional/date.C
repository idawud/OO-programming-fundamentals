#include <iostream>

struct Date{
	int year;
	int month;
	int day;
};



void dateStatus(Date date1, Date date2){
	if( date1.year > date2.year){ 
		std::cout << "Before \n";
	}
	else if ( date1.year < date2.year) { 
		std::cout << "After\n";
	}
	else{
		if( date1.month > date2.month){
			std::cout << "Before\n";
		}
		else if ( date1.month < date2.month) { 
			std::cout << "After\n";
		}
		else{
			if( date1.day > date2.day){
				std::cout << "Before\n";
			}
			else if ( date2.day > date1.day) {
				std::cout << "After\n";
			 }
			else{
				std::cout << "Current Date\n";
			}
		}
	}
}

	
int main(){
	Date my_birthday {1996,4,25};
	
	Date date {};

	std::cout << "Enter a year, month and day: ";
	std::cin >> date.year >> date.month >> date.day;
	

	dateStatus(my_birthday, date);

	if( date.year % 4 == 0 && date.year % 100 == 0 && date.year % 400 == 0) {
		std::cout << "This is a leap year!\n";
	}
	else {
		std::cout << "This is NOT a leap year!\n";
	}

}
