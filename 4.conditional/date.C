#include <iostream>
#include <string>

struct Date{
	int year;
	int month;
	int day;
};
 
void niceDate(Date date){
	std::string postfix; 
	if( date.day == 11 || date.day == 12 || date.day == 13) { postfix = "th"; }
	else if ( date.day == 1 || date.day == 21 || date.day == 31 ) { postfix = "st"; }
	else if ( date.day == 2 || date.day == 22 ) { postfix = "nd"; }
	else if ( date.day == 3 || date.day == 23 ) { postfix = "rd"; }
	else { postfix = "th";}
	
	switch( date.month){
		case 1:
			std::cout << date.day << postfix << " January " << date.year << std::endl;
			break;
		case 2:
			std::cout << date.day << postfix << " Febuary " << date.year << std::endl;
			break;
		case 3:
			std::cout << date.day << postfix << " March " << date.year << std::endl;
			break;
		case 4 :
			std::cout << date.day << postfix << " April " << date.year << std::endl;
			break;
		case 5:
			std::cout << date.day << postfix << " May " << date.year << std::endl;
			break;
		case 6:
			std::cout << date.day << postfix << " June " << date.year << std::endl;
			break;
		case 7:
			std::cout << date.day << postfix << " July " << date.year << std::endl;
			break;
		case 8:
			std::cout << date.day << postfix << " August " << date.year << std::endl;
			break;
		case 9:
			std::cout << date.day << postfix << " September " << date.year << std::endl;
			break;
		case 10:
			std::cout << date.day << postfix << " October " << date.year << std::endl;
			break;
		case 11:
			std::cout << date.day << postfix << " November " << date.year << std::endl;
			break;
		case 12:
			std::cout << date.day << postfix <<  " December " << date.year << std::endl;
			break;
		default:
			std::cout << "Invalid Month" << std::endl;
	}
}
	
int main(){
	Date date1 {};
	date1.year = 1996;
	date1.month = 4;
	date1.day = 25;
	
	Date date2 {};

	std::cout << "Enter a year, month and day: ";
	std::cin >> date2.year >> date2.month >> date2.day;
	
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

	if( (date2.year % 4 == 0 && date2.year % 400 == 0) || date2.year % 100 == 0) {
		std::cout << "This is a leap year!\n";
	}
	else {
		std::cout << "This is NOT a leap year!\n";
	}
	
	niceDate(date2);		
}
