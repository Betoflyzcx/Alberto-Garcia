/* 
 * File:   main.cpp
 * Author: Alberto Garcia
 * Created on June 22, 2016, 7:38 PM
 * Purpose: Fill an array with 20 values of type int 
 *          read in from the keyboard
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
    int read[19];// Array of 20
    
    for(int i =0; i < 20; i++) // loops through array
    {
        cout << "\nEnter a value into the array\n";
        cin >> read[i]; // sets value to all elements in array
    }
    
    //Exit Stage Right!
    return 0;
}
