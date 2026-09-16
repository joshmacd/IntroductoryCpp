//
// Created by Josh Macdonald on 16/09/2026.
//

#include<iostream>
//Declare this function in order to test the order of operations in C++
int order_operations();

int main(){
    const int x = 10;
    const int y = 3;

    int addition = x+y; // We call x,y the operands and + is the addition operator

    int subtraction = x-y; //  Integer subtraction

    int multiplication = x * y; // Integer multiplication

    int integer_division = x / y; // Division however we need to make sure the data types are correct here as 10/3 is not an integer
    // We need a better was of doing this:
    // Floating-point division: 10 / 3 = 3.333...
    double division = static_cast<double>(x) / y;

    int remainder = x % y; // Modulo operator

    int value = 10; // Define a new variable to increment

    int post_increment = value++; // Increment by 1, t will store the original value of x and x will now have the incremented value

    int pre_increment = ++value; // Increment by 1, this time both variables have the incremented number

    // Then print the expressions to the console
    std::cout << "Addition: " << addition << '\n';
    std::cout << "Subtraction: " << subtraction << '\n';
    std::cout << "Multiplication: " << multiplication << '\n';
    std::cout << "Integer division: " << integer_division << '\n';
    std::cout << "Floating-point division: " << division << '\n';
    std::cout << "Remainder: " << remainder << '\n';
    std::cout << "Post-increment result: " << post_increment << '\n';
    std::cout << "Pre-increment result: " << pre_increment << '\n';

    // Run the order of operations function
    order_operations();
    return 0;
}

int order_operations(){
    double z = 1 + 2 * 3;
    double w = (z + 7) / (3 * z);

    // Some extra code to improve the quality of the text that is being, Note: << is called a stream insertion operator
    std::cout <<"Order of Operations:" << '\n' << "z = 1 +2 * 3 = " << z << '\n' << std::endl;;

    std::cout <<"Division with parenthesis:"<< '\n' << "w = (z+7)/(3*z) = " << w << '\n' << std::endl;
    return 0;
    // Extra note, we can use 'using namespace std;' at the start which allows us to remove std in the above code
    // This is beacuse we have defined std everywhere in the file, so we can access all object in the std namespace.
}