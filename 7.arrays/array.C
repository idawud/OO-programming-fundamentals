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


int getCharCount(char *value){
    int count = 0; 
    for(int i = 0; value[i] != '\0'; ++i) { 
        ++count;
    } 
    return count;  
}

char* longestChar(  char* sequence1,   char*  sequence2){    
    int seq1 = getCharCount(sequence1);
    int seq2 = getCharCount(sequence2); 

    if ( seq1 >= seq2){ 
        return  sequence1; 
    }
    else{ 
        return sequence2;
    }  
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
	char turntabl[] {'t', 'u', 'r', 'n', 't','a', 'b','l'};
	char dawud[] {'d', 'a', 'w', 'u', 'd'};

    	auto result = longestChar( turntabl,dawud);
    	std::cout << "The longest char * is: " <<  result << "\n";	

}
