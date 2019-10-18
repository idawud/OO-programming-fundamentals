#include <iostream>

int getnum(){
	int num;
	std::cout << "Enter a number: ";
	std::cin >> num;
	return num;
}

int main(){
	int x, y, result;
	x = getnum();
	y = getnum();
	result = x + y;
	int c = 0;
	while(c < 3){ 
	std::cout<< "The sum of the two numbers is: " << result << std::endl;
	c++;
	} 
}
