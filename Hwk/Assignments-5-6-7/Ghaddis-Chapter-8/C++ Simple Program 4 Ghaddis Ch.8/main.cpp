/* 
 * File:   main.cpp
 * Author: Alberto Garcia
 * Created on July 25, 2016, 01:21 PM
 * Purpose: Write a function that will calculate the average in 
 *          the program 
 */

//System Libraries
#include <iostream> //Input/Output Library

using namespace std; //Namespace of the System Libraries


//User Libraries



//Global Constants


//Function Prototypes
float avgArray(int (&userNums)[10],const int SIZE);

//Execution Begins Here!
int main(int argc, char** argv){
    //Declare Variables
    const int SIZE = 10;
    int userNums[SIZE];
    cout << "Enter 10 numbers: ";
    for (int count = 0; count < SIZE; count++)
    {
     cout << "#" << (count + 1) << " ";
     cin >> userNums[count];
    }
    cout << "The average of those numbers is ";
    cout << avgArray(userNums,SIZE) << endl; 
    
    //Exit Stage Right!
    return 0;
}
float avgArray(int (&userNums)[10],const int SIZE)
{
    float x = 0;
    int userNums_[10];
    for(int i = 0; i < 9;i++)
    {  
        x = x+userNums_[SIZE];
    }
    x/=10;
    return x;
}