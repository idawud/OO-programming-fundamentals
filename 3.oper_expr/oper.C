#include <iostream>

int main(){
	int mult2 { 2  << 1};
	std::cout << "Two squared = '2 *2' = " << mult2 << std::endl;
	int i { 0};
 	++i; ++i;
	std::cout << i << std::endl;

	std::cout << ( i *= 6) << std::endl;
	
	int k,l;	
	int j = k = l = 3;
	std::cout << "k: " << k << " | j: " << j << " | l: " << l << std::endl;
	
	// casting
	float f = 9.8f;
	i = static_cast<int>(f);
	k = (int) f;
	std::cout << i << " {} " << k << std::endl;
	 
}
