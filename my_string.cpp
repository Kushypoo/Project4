#define MAX 256	//string size
#define DFT_YEAR 0
#define DFT_PRICE 0.0
#define DFT_AVAILABLE 0


#include <iostream>
#include <fstream>

#include "my_string.h"
#include "RentalCar.h"
#include "Agency.h"
#include "menu.h"
using namespace std;

char *myStringCopy(char * destination, const char * source){	
	int length = myStringLength(source);	//gets string length
	for(int a = 0; a < length + 1; ++a){
		destination[a] = source[a];	
		if(source[a] == '\0'){	 	//copies null terminator before terminating
			return destination;	
		}
	}	
	return destination;
}

size_t myStringLength(const char * str){	//take pointer to string
	int length;
	for(int a = 0; str[a] != '\0'; ++a){
		length = a;
	}
	return length + 1;	//returns +1 to compensate for a = 0
}

int myStringCompare(const char *str1, const char *str2){ //compares two strings alphabetically
	for(int a = 0; ;++a){	
			if(str1[a] == str2[a]){ 
				if(str1[a] == '\0'){
					return 0;	//tie returns 0
				}
			}else if(str1[a] > str2[a]){
				return 1;	// string 1 coming after string 2 returs 1
			}else{
				return -1;	//initial correct order returns -1
			}
	}
}

char * myStringCat(char * destination, const char * source){ //Attaches one string to the end of another
	int destinationLength = myStringLength(destination);	//gets length of destination
	int sourceLength = myStringLength(source);	//gets length of source
	for(int a = 0; a < sourceLength; ++a){
		destination[destinationLength + a] = source[a];	//moves source to end of destination 
		if(source[a] == '\0'){	 
			return destination;	//returns a pointer to the combined string 
		}
	}
	return destination;	//returns a pointer to the combined string 
}
