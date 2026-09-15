//
// Created by Josh Macdonald on 15/09/2026.
//
#include <iostream>

using namespace std;

int main(){
   // Swap the int value stored by each of the variables
   int a = 1;
   int b = 2;

   // Create a temp variable to store 'a'
   int c = a;

   a = b; // let variable contain the integer 2 and then set b equal to the integer stored in the temporary variable c
   b = c;

   // Printing a now displays the data contained in b when we first initalised the variables
   // This swaps the contents of both variables
   std::cout << a;

   return 0;
}
