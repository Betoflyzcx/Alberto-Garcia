/* 
 * File:   main.cpp
 * Author: Alberto Garcia
 * Created on June 22, 2016, 5:07 PM
 * Purpose: Find out the Output
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes
void friendly( );
void shy(int audience_count);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    
      
    //Output
   friendly( ); // calls friendly void
   shy(6);  // calls shy void and enters a parameter
   cout << "One more time:\n"; 
   shy(2); // calls shy and tests a different parameter
   friendly( ); // calls friendly one last time
   cout << "End of program.\n";
   
   /* Outputs Hello
    *         Goodbye
    *         One More time:
    *         Hello
    *         End of Program      */ 
    
    //Exit Stage Right!
    return 0;
}
void friendly( )
{
 cout << "Hello\n";
}
void shy(int audience_count)
{
 if (audience_count < 5)
 return;
 cout << "Goodbye\n";
}