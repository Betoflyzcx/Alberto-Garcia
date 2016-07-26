/* 
 * File:   main.cpp
 * Author: Alberto Garcia
 * Created on June 23, 2016, 06:22 PM
 * Purpose: Identify any errors in the following 
 *          declarations
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
   // int x[4] = { 8, 7, 6, 4, 3 }; Too many initializers , there only should be 4
    // int x[] = { 8, 7, 6, 4 }; error 'x' should be inside brackets [x]]
    const int SIZE = 4; // Only right one
    // int x[SIZE]; Declared twice
    
    //Exit Stage Right!
    return 0;
}
