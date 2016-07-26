
/* 
 * File:   main.cpp
 * Author: Alberto Garcia
 * Created on June 22, 2016, 5:10 PM
 * Purpose: Write a function that takes in 3 parameters and prints 
 *          the product of them
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes
void call(int x,int y,int z);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    
    //Output
    call(4,4,7);
    
    //Exit Stage Right!
    return 0;
}
void call(int x,int y,int z)
{
    // Prints sum of x,y, and z
    cout << "\n"<<x+y+z;
}