#include <iostream>
#include <vector>
#include <Date.H>
 
struct Date{
	int year;
	int month;
	int day;
};

int main() { 
	Date date1 {};
	date1.year = 1996;
	date1.month = 4;
	date1.day = 25;
	
	Date date2 {};
	date2.year = 2004;
	date2.month = 11;
	date2.day = 21;

	prettyprint(date1);
	prettyprint(getDate(5,4,1990));

	prettyprint(max(date1, date2));

	swapDates(&date1, &date2);
	prettyprint(date1);

	setDateToJanNextYear(&date2);
	prettyprint(date2);
}
