#include <iostream>

int main(){
	std::cout << "Problem 1:\n";
	std::cout << "2 squared =  " << (2  << 1) << std::endl;

	std::cout << "\nProblem 2:\n";
	int i {0};
 	++i; ++i;
	std::cout << i << std::endl;

	std::cout << "\nProblem 3:\n";
	std::cout << ( i *= 6) << std::endl;
	
	std::cout << "\nProblem 4:\n";
	int k,l;	
	int j = k = l = 3;
	std::cout << "k: " << k << " | j: " << j << " | l: " << l << std::endl;
	
	// casting
	std::cout << "\nProblem 5:\n";
	float f {9.8f};
	i = static_cast<int>(f);
	k = (int) f;
	std::cout << i << " {} " << k << std::endl;
	 
}
