/* 
 * File:   main.cpp
 * Author: Alberto Garcia
 * Created on June 23, 2016, 05:25 PM
 * Purpose: Find the bug in the program and fix it
 *         (Find out why the program isn't displaying
 *          the elements in the array that are out of 
 *          order)
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
    double a[10]{1,2,3,4,5,4,3,2,1,2};
    // Checks if the array is in order 
    if (!(a[0]<= a[1] <= a[2] <= a[3] <=a[4]<= a[5]<=a[6]<=a[7]<=a[8]<=a[9]<=a[10]))
    {
     for (int index = 0; index < 10; index++) // used to loop through array
     {
      if (a[index] > a[index + 1]) //Outputs what elements in the array are out of order
      cout << "Array elements " << index << " and "
      << (index + 1) << " are out of order.";
     }
    }
    
    //Exit Stage Right!
    return 0;
}
