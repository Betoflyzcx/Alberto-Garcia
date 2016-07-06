
/* 
 * File:   main.cpp
 * Author: Alberto Garcia
 * Created on July 3, 2016, 8:00 AM
 * Purpose : Convert Between Inches, Meters, Kilo's, Feet, And Miles
 */ 

// System Libraries
#include <iostream> // Input/Output Library 
#include <sstream> // Manipulates strings like an independent I/O device .
#include <string> // Used to Include Strings

using namespace std; // Namespace Of The System Libraries

// User Libraries 



// Global Constants  



// Declare Global Variables
int Value, Val_Remind; //Stores Value Of Conversion and What Was Converted
int Measurement; // Conversion Unit "Value" Is In
int MeasurementConvert; // Conversion Unit "Value" Will Convert To

// Name Of Coversion Units
string Inch = "Inches", Meter = "Meters", Kilo = "Kilometers", feet = "feet", Mile = "Miles";


//Function Prototypes
void InchesConvert()     // Conversion of Inches
 {
  switch (MeasurementConvert)
    {
        // Converting Inches To Inches
        case 1:     
        // Output Conversion Value Result
	cout << "\n" << "There are " << Value << Inch << "In" << Val_Remind << Inch;
	break;
        // Converting Inches To Meters
	case 2:
	Value = Value / 39.3701;
        // Output Conversion Value Result
	cout << "\n" << "There are " << Value << Meter << "In" << Val_Remind << Inch;
	break;
        // Converting Inches To Kilo's
	case 3:
	Value = Value / 39370.1;
        // Output Conversion Value Result
	cout << "\n" << "There are " << Value << Kilo << "In" << Val_Remind << Inch;
	break;
        // Converting Inches To Feet
	case 4:
        Value = Value / 12;
        // Output Conversion Value Result
	cout << "\n" << "There are " << Value << feet << "In" << Val_Remind << Inch;
        break;
        // Converting Inches To Miles
	case 5:
	Value = Value / 63360.0342;
        // Output Conversion Value Result
	cout << "\n" << "There are " << Value << Mile << "In" << Val_Remind << Inch;
	break;

	}
}
void MetersConvert()   // Conversion of Meters
    {
     switch (MeasurementConvert)
      {
	// Converting Meters To Inches 
	case 1:
	Value = Value*39.3701;
        // Output Conversion Value Result
	cout << "\n" << "There are " << Value << Inch << "In" << Val_Remind << Meter;
	break;
        
        // Converting Meters To Meters
	case 2:    
        // Output Conversion Value Result
	cout << "\n" << "There are " << Value << Meter << "In" << Val_Remind << Meter;
	break;
        
        // Converting Meters To Kilo's 
	case 3:
	Value = Value / 1000.0005;
        // Output Conversion Value Result
	cout << "\n" << "There are " << Value << Kilo << "In" << Val_Remind << Meter;
	break;
        
        // Converting Meters To Feet 
	case 4:
	Value = Value*3.2808;
        // Output Conversion Value Result
	cout << "\n" << "There are " << Value << feet << "In" << Val_Remind << Meter;
	break;
        
        // Converting Meters To Miles
        case 5:
	Value = Value / 1609.3449;
        // Output Conversion Value Result
	cout << "\n" << "There are " << Value << Mile << "In" << Val_Remind << Meter;
	break;
		}
	}
void KilometerConvert()   // Conversion of Kilometers
    {
      switch (MeasurementConvert)
      {
	// Converting Kilo's To Inches 
	case 1:
	Value = Value*39370.1000;
        // Output Conversion Value Result
	cout << "\n" << "There are " << Value << Inch << "In" << Val_Remind << Kilo;
	break;
        
        // Converting Kilo's To Meters
	case 2:
	Value = Value*1000.0005;
        // Output Conversion Value Result
	cout << "\n" << "There are " << Value << Meter << "In" << Val_Remind << Kilo;
	break;
        
        // Converting Kilo's To Kilo's
	case 3:
        // Output Conversion Value Result
	cout << "\n" << "There are " << Value << Kilo << "In" << Val_Remind << Kilo;
	break;
        
        // Converting Kilo's To Inches 
	case 4:
	Value = Value*3280.8417;
        // Output Conversion Value Result
	cout << "\n" << "There are " << Value << feet << "In" << Val_Remind << Kilo;
	break;
        
        // Converting Kilo's To Miles
	case 5:
	Value = Value / 1.6093;
        // Output Conversion Value Result
	cout << "\n" << "There are " << Value << Mile << "In" << Val_Remind << Kilo;
        break;
	}
     }
void FeetConvert()   // Conversion of Feet
 {
     switch (MeasurementConvert)
      {
        // Converting Feet To Inches 
	case 1:
	Value = Value * 12;
        // Output Conversion Value Result
	cout << "\n" << "There are " << Value << Inch << "In" << Val_Remind << feet;
	break;
        
        // Converting Feet To Meters 
	case 2:
	Value = Value / 3.2808;
        // Output Conversion Value Result
	cout << "\n" << "There are " << Value << Meter << "In" << Val_Remind << feet;
	break;
        
        // Converting Feet To Kilo's
        case 3:
	Value = Value / 1000.0005;
        // Output Conversion Value Result
	cout << "\n" << "There are " << Value << Kilo << "In" << Val_Remind << feet;
	break;
        
        // Converting Feet To Feet
	case 4:
        // Output Conversion Value Result
	cout << "\n" << "There are " << Value << feet << "In" << Val_Remind << feet;
	break;
        
        // Converting Feet To Miles
	case 5:
	Value = Value / 5280.0029;
        // Output Conversion Value Result
	cout << "\n" << "There are " << Value << Mile << "In" << Val_Remind << feet;
	break;
	}
}
void MileConvert()   // Conversion of Miles
 {
    switch (MeasurementConvert)
     {
	// Converting Miles To Inches 
	case 1:
	Value = Value * 63360.0342;
        // Output Conversion Value Result
	cout << "\n" << "There are " << Value << Inch << "In" << Val_Remind << Mile;
	break;
        
        // Converting Miles To Meters
	case 2:
	Value = Value * 1609.3449;
        // Output Conversion Value Result
	cout << "\n" << "There are " << Value << Meter << "In" << Val_Remind << Mile;
	break;
        
        // Converting Miles To Kilo's
        case 3:
	Value = Value * 1.6093;
        // Output Conversion Value Result
	cout << "\n" << "There are " << Value << Kilo << "In" << Val_Remind << Mile;
	break;
        
        // Converting Miles To Feet 
        case 4:
	Value = Value * 5280.0029;
        // Output Conversion Value Result
	cout << "\n" << "There are " << Value << feet << "In" << Val_Remind << Mile;
	break;
        
        // Converting Miles To Miles 
        case 5:
        // Output Conversion Value Result
	cout << "\n" << "There are " << Value << Mile << "In" << Val_Remind << Mile;
	break;
	}
}

// Execution Starts Here!
int main(int argc, char** argv) {
// output 
cout << "\n" << "Enter a value" << endl;

// Input Value 
cin >> Value;

Val_Remind = Value; // Used as Reminder To Remember Value 

// Output Asking What Type of Conversion Unit Is the Value In 
cout << "\n" << "\n" << " Enter The Unit Of Measurement The Value Is..." << endl;
cout << "\n" << "Enter 1 for inches ... Enter 2 For meters ... Enter 3 for kilometers ....." << endl << "Enter 4 for feet .. enter 5 for miles" << endl;

// Input Conversion Unit The Value is in
cin >> Measurement;

//Output 
cout << "\n" << "Now enter what you wish to convert to" << endl;

// Input What Conversion Unit Is the Value being Converted To
cin >> MeasurementConvert;


 switch (Measurement)
  {
   // Decides Conversion Unit of "Value"
   case 1:
   InchesConvert();    // Will Convert Through Inches Convert 
   break;
   case 2:
   MetersConvert();    // Will Convert Through Meters Convert 
   break;
   case 3:
   KilometerConvert();// Will Convert Through Kilometers Convert 
   break;
   case 4:
   FeetConvert();    // Will Convert Through Feet Convert 
   break;
   case 5:
   MileConvert();   // Will Convert Through Miles Convert 
   break;
 }
 
 // Exit Stage Right!
    return 0;
}

