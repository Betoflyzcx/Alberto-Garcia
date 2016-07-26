/* 
 * File:   main.cpp
 * Author: Alberto Garcia
 * Created on July 25, 2016, 6:37 AM
 * Purpose: Write a structure declaration that inputs 2 students, their id's,
 *          their entry year, and their GPA
 */

//System Libraries
#include <iostream> //Input/Output Library
using namespace std; //Namespace of the System Libraries


//User Libraries



//Global Constants

struct Student
{
    short ID;
    int entry_year;
    float GPA;
};
//Function Prototypes


//Execution Begins Here!
int main(int argc, char** argv){
    //Declare Variables
    Student V_1;
    V_1.ID = 1234;
    V_1.entry_year = 2008;
    V_1.GPA = 3.41;
    
    Student V_2;
    V_2.ID = 5678;
    V_2.entry_year = 2010;
            
    //Exit Stage Right!
    return 0;
}
