#include <iostream>

int main(){
	int x, y, result;
	std::cout << "Enter two numbers: ";
	std::cin >> x >> y;
	result = x * y;

	if(result> 100){
		std::cout << "HIGH\n";
	}
	else{
		std::cout << "LOW" << std::endl;
	}
 
}
