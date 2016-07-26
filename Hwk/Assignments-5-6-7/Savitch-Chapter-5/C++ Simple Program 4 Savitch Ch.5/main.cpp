/* 
 * File:   main.cpp
 * Author: Alberto Garcia
 * Created on June 22, 2016, 5:45 PM
 * Purpose: Write a function that changes the cost 
 *          of an item to the cost + sales tax
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes
void add_tax(float tax_rate, float &cost);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float cost = 13.75; //original value of cost
    
    add_tax(0.15, cost); // calls add tax
    
    cout << "\n" << cost <<endl;
    //Exit Stage Right!
    return 0;
}
void add_tax(float tax_rate, float &cost)
{ // makes cost = to the tax + the cost
    cost = cost + (tax_rate*cost);// adds tax to cost 
}