#include <Date.H>
#include <iostream>
#include <string>

void prettyprint(Date date){
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
	
Date getDate(int day, int month, int year){
	Date date {};
	date.day = day;
	date.month = month;
	date.year = year;

	return date;
}

Date max(Date date1, Date date2){
	if( date1.year > date2.year){ 
		return date1;
	}
	else if ( date1.year < date2.year){
		return date2; 
	} else{ 
		if( date1.month > date2.month){ 
			return date1; 
		 } else if ( date1.month < date2.month){ 
			return date2;
		} else{ 
			if( date1.day > date2.day){ 
				return date1;
		 	} else if ( date2.day > date1.day){
				return date2; 
			}
			else{ 
				return date1; 
			}
		 } 
	}
}

void swapDates(Date *date1, Date *date2){
	Date temp { *date1 };
	*date1 = *date2;
	*date2 = temp;
}

void setDateToJanNextYear(Date *date){
	(*date).year = (*date).year + 1;
	(*date).month = 1;
	(*date).day = 1;
}
