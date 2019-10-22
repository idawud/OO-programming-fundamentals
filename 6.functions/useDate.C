#include <iostream>
#include <vector>
#include <Date.H>
 
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

	// Problem 4
	setDateToJanNextYear(&date2);
	prettyprint(date2);

	// Problem 5
	swapDates(&date1, &date2);
	prettyprint(date1);

	// Problem 6
	Date date3 {};
	date3.year = 1928;
	date3.month = 8;
	date3.day = 12;
	
	Date date4 {};
	date4.year = 2019;
	date4.month = 10;
	date4.day = 21;

	Date *ptrDt1 { &date1 };
	Date *ptrDt2 { &date2 };
	Date *ptrDt3 { &date3 };
	Date *ptrDt4 { &date4 };

	std::cout << "\nDirect Addressess: " << std::endl;
	std::cout << "Address d1: " << ptrDt1 << "\nAddress d2: " << ptrDt2 << "\nAddress d3: " << ptrDt3 << "\nAddress d4: " << ptrDt4 << std::endl;

	std::cout << "\nUsing Arrays: " << std::endl;
	Date dateArr [4] { date1, date2, date3, date4 };
	for (int i = 0; i < 4; ++i){
		std::cout << "Address: " << &dateArr[i] << std::endl;
	}

	std::cout << "\nUsing Vectors: " << std::endl;
	std::vector<Date> dates { date1, date2, date3, date4 };
	for (int i = 0; i < 4; ++i){
		std::cout << "Address: " << &dates[i] << std::endl;
	}
}
