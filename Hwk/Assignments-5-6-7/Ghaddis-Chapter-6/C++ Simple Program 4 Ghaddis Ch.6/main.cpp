/* 
 * File:   main.cpp
 * Author: Alberto Garcia
 * Created on July 25, 2016, 9:40 AM
 * Purpose : What is the output of the program 
 */

// System Libraries
#include <iostream> // Input/Output Library

using namespace std; //Namespace of the System Libraries


//User Libraries



//Global Constants



//Function Prototypes
  void func1(double, int); 
   


// Execution Begins Here!
int main(int argc, char** argv)
{
    //Declare Variables
	int x = 0;
    double y = 1.5;
    cout << x << " " << y << endl; // displays 0 amd 1.5
    func1(y, x);
    cout << x << " " << y << endl; // still displays 0 and 1.5
 
 
    return 0;
} 

  void func1(double a, int b)
{
  cout << a << " " << b << endl; // displays 1.5 and 0
  a = 0.0; // changes the values of a and b 
  b = 10;
  cout << a << " " << b << endl; // displays 0 and 10 
}