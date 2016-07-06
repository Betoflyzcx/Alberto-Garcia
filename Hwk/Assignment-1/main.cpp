

/* 
 * File:   main.cpp
 * Author: Alberto Garcia
 * Created on July 3, 2016, 1:10 PM
 * Purpose : Calculate the retroactive pay of an employee
 */

// System Libraries
#include <iostream> // Input/Output Library

using namespace std; //Namespace of the System Libraries/ 


//User Libraries



//Global Constants



//Function Prototypes


//Execution Begins Here!
int main(int argc, char** argv) 
{
// Declare Variables
float E_salary; // Employee's Salary
float RetroSalary; 

// Ask for employee salary 
cout <<"What is the employer's annual salary ";

// Input E_salary
cin >> E_salary;

RetroSalary = E_salary / 7.6;//Calculate Retro Salary 

// Output Retro Salary
cout<<"The Employer's retroactive pay is " << RetroSalary <<"\n";

// Output New Salary 
cout<<"The Employers new annual salary is " << E_salary + RetroSalary <<"\n";


RetroSalary =  E_salary /12;//Further Retro Salary Calculations
RetroSalary /= 7.6;

// Output New Salary
cout << "The Employer's new monthly salary is " << E_salary/12 + RetroSalary << "\n";

// Exit Stage Right!
return 0;
}

