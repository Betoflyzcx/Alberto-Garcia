/* 
 * File:   main.cpp
 * Author: Alberto Garcia
 * Created on June 22, 2016, 5:52 PM
 * Purpose: Write a driver program for the function
 *          Introduction in Display 5.11
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes
void Introduction();

void TestIntroduction(); // Tests Introduction

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    
    TestIntroduction(); // Tests a function
    
    //Exit Stage Right!
    return 0;
}
void Introduction()
{
    cout << "This program determines the retail price for\n";

}

void TestIntroduction() // Tests Introduction
{
    cout << "\n Introduction is working it displays:\n\t";
    Introduction();
}