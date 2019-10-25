#include <iostream>

void printMatrix(int matrix [][2], int n){
	for( int i = 0; i < n; ++i){
		for(int j = 0; j < 2; ++j){
			std::cout << matrix[i][j] << " ";
		}
		std::cout << std::endl;
	}
}


void printMatrixThreeDim (int matrix [][2][3], int n){
	for( int i = 0; i < n; ++i){
		for(int j = 0; j < 2; ++j){
			for(int k = 0; k < 3; ++k){
				std::cout << matrix[i][j][k] << " ";
			}
			std::cout << std::endl;
		}
		std::cout << std::endl;
	}
}


int getCharsCount(const char *value){
    int count = 0;  
    for(int t = 0; value[t] != '\0'; ++t) { 
        ++count;
    } 
    return count;  
}

const char* longestChars(const  char* sequence1, const  char*  sequence2){      
    if ( getCharsCount(sequence1) >= getCharsCount(sequence2)){ 
        return  sequence1; 
    } 
    return sequence2; 
}


int main(){
	// Problem 1 & 2
	int arr[4] {1,2,5,7};
	*(arr + 1) = 3;
	std::cout << arr[1] << std::endl;

	// Problem 3
	int matrix[2][2] { 1, 2, 3, 4};
	printMatrix(matrix, 2);
	
	std::cout << "\nThree dimentional array" << std::endl;
	int mat [2][2][3] { 1,2,3,4,5,6,7,8,9,10,11,12 };
	printMatrixThreeDim(mat,2);

	//Problem 4
	char turntabl[] {'t', 'u', 'r', 'n', 't','a', 'b','l', '\0'}; 
    char dawud[] {'d', 'a', 'w', 'u', 'd','\0'}; 

    std::cout << "The longest char * is: " <<  longestChars( turntabl, dawud) << std::endl; 	

}
