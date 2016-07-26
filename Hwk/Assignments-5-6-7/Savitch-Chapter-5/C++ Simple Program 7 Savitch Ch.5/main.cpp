/* 
 * File:   main.cpp
 * Author: Alberto Garcia
 * Created on June 22, 2016, 7:18 PM
 * Purpose: Write a driver program for the function 
 *          add_tax from Self_Test Exercise 11
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes
float add_tax(float tax_rate, float cost);
void Testadd_tax(float &cost);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float cost = 13.75; //original value of cost
    
    // Tests add_tax
    Testadd_tax(cost);
    //Exit Stage Right!
    return 0;
}
float add_tax(float tax_rate, float cost)
{ // makes cost = to the tax + the cost
    cost = cost + (tax_rate*cost);// adds tax to cost 
    return cost;
}
void Testadd_tax(float &cost)
{
    // Tests different values on void add_tax
    cout << "Testing add tax:\t" << add_tax(0.5,cost) << endl;
    cout << "Testing add tax:\t" << add_tax(0.7,cost) << endl;
    cout << "Testing add tax:\t" << add_tax(0.9,cost) << endl;
    cout << "Testing add tax:\t" << add_tax(1.2,cost) << endl;
    cout << "Testing add tax:\t" << add_tax(1.3,cost) << endl;
}