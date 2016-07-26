/* 
 * File:   main.cpp
 * Author: Alberto Garcia
 * Created on June 23, 2016, 06:45 PM
 * Purpose: Find out the Output of the following code
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int i, temp[10]; // Array 'i' of size 10
    for (i = 0; i < 10; i++) //loops through array 
      temp[i] = 2*i;  // sets value for array 
    for (i = 0; i < 10; i++) // loops through array again
      cout << temp[i] << " "; // Outputs array
    cout << endl; // skips a line
    for (i = 0; i < 10; i = i + 2) // Loops through even parts of the array
      cout << temp[i] << " "; // Outputs the even parts of the array
    
    //Exit Stage Right!
    return 0;
}
