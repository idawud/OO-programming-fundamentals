#include <iostream> 

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

int main() {
    char turntabl[] {'t', 'u', 'r', 'n', 't','a', 'b','l'};

    char dawud[] {'d', 'a', 'w', 'u', 'd'};
 
    auto result = longestChar( dawud, dawud);  
    std::cout << "The longest char * is: " <<  result << "\n"; 
    return 0;
}