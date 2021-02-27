// C++ program to convert a string to 
// integer array 
#include <bits/stdc++.h> 
using namespace std; 

// Function to convert a string to 
// integer array 
void convertStrtoArr(string str) 
{ 
	// get length of string str 
	int str_length = str.length(); 

	// create an array with size as string 
	// length and initialize with 0 
	int arr[str_length] = { 0 }; 

	int j = 0, i, sum = 0; 

	// Traverse the string 
	for (i = 0; str[i] != '\0'; i++) { 

		// if str[i] is ', ' then split 
		if (str[i] == ',') 
			continue; 
		if (str[i] == ' '){ 
			// Increment j to point to next 
			// array location 
			j++; 
		} 
		else { 

			// subtract str[i] by 48 to convert it to int 
			// Generate number by multiplying 10 and adding 
			// (int)(str[i]) 
			arr[j] = arr[j] * 10 + (str[i] - 48); 
		} 
	} 

	//cout << "arr[] = "; 
	for (i = 0; i <= j; i++) { 
		//cout << arr[i] << " "; 
		sum += arr[i]; // sum of array 
	} 

	// print sum of array 
	cout << sum; 
} 

// Driver code 
int main() 
{ 
	string str = " "; 
    getline(cin, str);
	convertStrtoArr(str); 
	return 0; 
} 
