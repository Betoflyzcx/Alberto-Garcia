/* 
 * File:   main.cpp
 * Author: Alberto Garcia
 * Created on June 23, 2016, 02:14 PM
 * Purpose: Write a function that will print the 
 *          array in exercise 21
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes
void echo(int (&a)[4][5],int x);
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int a[4][5];
    
    // double for loop loops through the 2-dimensional array
    for(int x=0; x<5;x++)
    {
        for(int y =0; y < 6;y++) 
        {
            // Input the value of array element
            cout << "\n Fill in the Array" << endl;
            cin >> a[x][y];
        }
    }
    echo(a,4); // references the array 
    
    //Exit Stage Right!
    return 0;
}
void echo(int (&a)[4][5], int x)
{
  for(int x=0; x<5;x++)
    {
        for(int y =0; y < 6;y++)
        {
            // Outputs the array
          cout << "\n" << a[x][y] << endl;  
        }
        if (x ==3)
        {
            cout << "\t\t Array Echo"; // Outputs this in the middle (description))
        }
    }
        
}