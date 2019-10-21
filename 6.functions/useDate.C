#include <iostream>
#include <vector>
#include <Date.H>

int main() {
	Date date1 {};
	date1.year = 1996;
	date1.month = 4;
	date1.day = 25;
	
	Date date2 {};
	date2.year = 1944;
	date2.month = 11;
	date2.day = 21;

	prettyprint(date1);
}
