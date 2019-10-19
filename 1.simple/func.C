#include <iostream>

int getnum(){
	int num;

	std::cout << "Enter a number: ";
	std::cin >> num;

	return num;
}

int main(){  
	int x { getnum() };
	int y { getnum() };
	int result {x + y};

	int counter {0};
	std::cout<< "The sum of the two numbers is: ";
	
	while(counter < 3){ 
		std::cout<< result << " ";
		++counter;
	} 

	std::cout << std::endl;
}
