/* 
 * File:   main.cpp
 * Author: Alberto Garcia
 * Created on June 22, 2016, 7:49 PM
 * Purpose: Write a function which increases the 
 *          value of the elements in an array by one
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes
void onemore(int (&Val)[10]);
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int Val[10];
    
    onemore(Val);
    //Exit Stage Right!
    return 0;
}
void onemore(int (&Val)[10])
{
    for (int i =0; i < 11; i++)
    {
        Val[i] = i;
        cout << "\n"<< Val[i] << endl;
    }
}
