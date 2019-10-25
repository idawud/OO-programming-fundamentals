struct Date{
	int year;
	int month;
	int day;
};
void prettyprint(Date date);
Date getDate(int day, int month, int year);
Date max(Date date1, Date date2);
void swapDates(Date *date1, Date *date2);
void setDateToJanNextYear(Date *date);
