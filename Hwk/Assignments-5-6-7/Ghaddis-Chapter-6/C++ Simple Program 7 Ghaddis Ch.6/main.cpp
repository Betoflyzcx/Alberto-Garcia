/* 
 * File:   main.cpp
 * Author: Alberto Garcia
 * Created on July 25, 2016, 9:48 AM
 * Purpose : What is the output of the following program if 
 *           12 or 14 is entered
 */

// System Libraries
#include <iostream> // Input/Output Library

using namespace std; //Namespace of the System Libraries


//User Libraries



//Global Constants



//Function Prototypes
  void func1(int &, int &); 
  void func2(int &, int &, int &); 
  void func3(int, int, int);
   

// Execution Begins Here!
int main(int argc, char** argv)
{
    //Declare Variables
    int x = 0, y = 0, z = 0; 
    // outputs all zero's
    cout << x << " " << y << z << endl; 
    func1(x, y); 
    // Outputs 2 numbers entered in func1
    cout << x << " " << y << z << endl; 
    func2(x, y, z); // changes vaues of y and z and turns x to their sum
    // outputs the new value of x,y, and z
    cout << x << " " << y << z << endl; 
    func3(x, y, z); // changes value of x
    // Displays new value of x and same values of y and z
    cout << x << " " << y << z << endl; 
    return 0;
} 
void func1(int &a, int &b) 
{
    cout << "Enter two numbers: "; 
    cin  >> a >> b; // Input a and b
}
void func2(int &a, int &b, int &c) 
{ 
    b++; // adds 1 to be
    c--; // subtracts 1 from c
    a = b + c; // sets a = to their sum
}
void func3(int a, int b, int c) 
{
    a = b - c; // subtracts b and c now
}

/* Output 12 140
 *        14 15-1
 *        14 15-1
 */