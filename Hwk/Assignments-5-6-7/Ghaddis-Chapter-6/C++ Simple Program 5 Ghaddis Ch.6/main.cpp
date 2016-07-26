/* 
 * File:   main.cpp
 * Author: Alberto Garcia
 * Created on July 25, 2016, 9:44 AM
 * Purpose : What is the output of the program 
 */

// System Libraries
#include <iostream> // Input/Output Library

using namespace std; //Namespace of the System Libraries


//User Libraries



//Global Constants



//Function Prototypes
  int manip(int);
  int manip(int, int);
  int manip(int, double);
   


// Execution Begins Here!
int main(int argc, char** argv)
{
    //Declare Variables
	int x = 2, y= 4, z;
    double a = 3.1;
    z = manip(x) + manip(x, y) + manip(y, a);
    cout << z << endl;
 
 // output is 30 
    return 0;
} 

int manip(int val)
{
return val + val * 2; // multiplies val by 2 and adds it to var
}
int manip(int val1, int val2)
{
return (val1 + val2) * 2; // adds previous value to 1st value and multiplies by 2 
}
int manip(int val1, double val2) // multiplies the new values again
{
return val1 * static_cast<int>(val2);
}