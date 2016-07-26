/* 
 * File:   main.cpp
 * Author: Alberto Garcia
 * Created on June 23, 2016, 04:50 PM
 * Purpose: Find the output of the following code  
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
    char symbol[3] = {'a', 'b', 'c'};
    
    // Outputs array symbol
    for (int index = 0; index < 3; index++)//loops through array
        // Outputs all elements the loop looped through
    cout << symbol[index] <<endl; 
    
    //Exit Stage Right!
    return 0;
}
