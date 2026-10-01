//
// Created by Josh Macdonald on 22/09/2026.
//

#include <iostream>
#include <string>

// Cleans up code by allowing us to remove std:: when printing strings to console
using namespace std;

// Declare a new function to test reading from the console
int reading();

int main()
{
   int x = 10;
   int y = 10;

   cout << "x =  " << x << endl
   << "y = " << y << endl;

   // Call the reading function
   reading();
   return 0;
}

int reading(){
   // Store an empty integer variable and get a user input from console
   int integer;

   //Prompt the user to enter an even integer; at this point
   // I am not sure how to validate this using If statements as of yet!
   cout << "Choose an integer z:" << endl;
   // This allows user to enter a value
   cin >> integer;
   // Print the value back to user
   cout << "The integer value is: " << integer << endl;

   // Square the integer and store this as a new variable and then print to console
   int square_inetger = integer * integer;
   cout << "The integers square is: " << square_inetger << endl;
   return 0;
}
