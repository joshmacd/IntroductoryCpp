// Created by Josh Macdonald on 16/09/2026.
// This exercise is to practice performing calculations and outputting text to the console.
// The question is that Josh's Coffee Shop has made £56,360 last year in sales.
// There are fixed costs of £28,500 which include bills, salaries, rent. He also has to pay taxes of
// 10% income tax, 5% employment taxes and 3% business rates tax.
// Output the amounts owed for each tax, the profit after tax and fixed costs.
// We ignore tax brackets in this question and just tax the whole amount.

#include <iostream>
#include <iomanip>

int main() {
    // Initialise our fixed variables
    const double total_income = 56360;
    const double fixed_cost = 28500;

    const double income_tax = 0.10;
    const double employment_tax = 0.05;
    const double business_tax = 0.03;

    // Calculate the amount owed for each tax
    double income_tax_owed = total_income * income_tax;
    double employment_tax_owed = total_income * employment_tax;
    double business_tax_owed = total_income * business_tax;

    // Calculate total tax
    double total_tax = income_tax_owed
                     + employment_tax_owed
                     + business_tax_owed;

    // Calculate profit after tax and fixed costs
    double take_home = total_income - total_tax - fixed_cost;

    // Display results to two decimal places
    std::cout << std::fixed << std::setprecision(2);

    std::cout << "Income tax owed: £" << income_tax_owed << '\n';
    std::cout << "Employment tax owed: £" << employment_tax_owed << '\n';
    std::cout << "Business rates tax owed: £" << business_tax_owed << '\n';
    std::cout << "Total tax owed: £" << total_tax << '\n';
    std::cout << "Profit after tax and fixed costs: £" << take_home << '\n';

    return 0;
}

