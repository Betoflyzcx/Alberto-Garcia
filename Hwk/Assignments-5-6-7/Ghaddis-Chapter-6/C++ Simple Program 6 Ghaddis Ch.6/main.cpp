/* 
 * File:   main.cpp
 * Author: Alberto Garcia
 * Created on July 25, 2016, 9:48 AM
 * Purpose : What is the output of the following program 
 */

// System Libraries
#include <iostream> // Input/Output Library

using namespace std; //Namespace of the System Libraries


//User Libraries



//Global Constants



//Function Prototypes
  void showDouble(int value);
   


// Execution Begins Here!
int main(int argc, char** argv)
{
    //Declare Variables
    int num;
	  
    for (num = 0; num < 10; num++)
    {
     showDouble(num); // calls 10 times
    }

    return 0;
} 
 void showDouble(int value)
{                     // doubles for loops value 
 cout << value << " " << (value * 2) << endl; // displays 0,2, then 4, then 6 , then 8....
                                             // Right next to 0,1,2,3,4,5 ect. 
}