/* 
 * File:   main.cpp
 * Author: Alberto Garcia
 * Created on June 22, 2016, 9:11 PM
 * Purpose: write a program that will read up to 10 
 *          non-negative integers into an array and 
 *          then write it back to the screen
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
    int number_array[9];
    
    for (int i =0; i <=9; i++)//loops through array 
    {
        cout << "\nEnter a number into the array"<< endl;
        cin >> number_array[i];  //sets value into array
        while(number_array[i]<0) // if number is negative keeps looping
        {
         cout << "\nTry again the number has to be positive"<<endl;
         cin >> number_array[i];
        }    
    }
    // Outputs the numbers you entered
    cout << "\n \n The numbers you entered were:\n";
    for (int i =0; i <=9; i++)
    {
        cout << "\n\t" << number_array[i]<< endl;
    }
    
    
    //Exit Stage Right!
    return 0;
}
