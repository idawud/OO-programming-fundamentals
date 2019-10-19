#include <iostream>
#include <string>
#include <vector>

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
	date2.year = 2003;
	date2.month = 6;
	date2.day = 6;

	Date date3 {};
	date3.year = 1984;
	date3.month = 2;
	date3.day = 28;
	
	std::cout << "Problem 1:\n";
	std::vector<Date> dates { date1, date2, date3 };
	for( auto date : dates) {
		niceDate(date);
	}
	
	std::cout <<"\nProblem 2:\n";
	Date earliest {dates[0]};
	for(int i = 1; i < 3; ++i) {
		if ( earliest.year > dates[i].year) {
			earliest = dates[i];
		}
	}

	std::cout << "The earliest date is: ";
	niceDate(earliest);	
	
	std::cout << "\nProblem 3:\n";
	for(auto date : dates){
		int count = 0;
		while( count < 3) {
			niceDate(date);
			++count;
		}
	}
	
	std::cout << "\nProblem 4:\n";	
	for (int i = 0; i < 3; ++i){
		for( auto date : dates){
			niceDate(date);
		}
	}

}
