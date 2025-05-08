/*
Imagine you're developing a financial calculator for a bank's system that allows users to calculate the
ratio of two monetary values they input. This tool must be reliable, as it's part of a crucial decision
making process for loan eligibility.
A bank customer is required to enter two values directly into the system:
1. The first value represents the total loan amount they wish to apply for.
2. The second value represents their annual income.
The system will compute and display the ratio of the loan amount to the income, which helps the bank
assess the customer's loan-to-income ratio.
Major challenges that developer will face while developing the system would be, if the customer
mistakenly enters non-numerical characters (e.g., "abc"), the system should handle the situation
gracefully and prompt the user to correct their input. If the customer enters 0 as their annual income,
the system must identify this issue and avoid performing a division that would lead to an invalid result.
*/

#include <iostream>
#include <limits>   // for numeric_limits
#include <iomanip>  // for setprecision

using namespace std;

// Function to read a positive double with input validation
double readPositiveDouble(const string& prompt) {
    double value;
    while (true) {
        cout << prompt;
        cin >> value;

        if (cin.fail()) {
            // Invalid input: not a number
            cin.clear(); // clear the error flags
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard invalid input
            cout << "Invalid input. Please enter a numeric value.\n";
        } else if (value < 0) {
            // Negative number
            cout << "Please enter a positive number.\n";
        } else {
            break;
        }
    }
    return value;
}

int main() {
    cout << "--- Loan to Income Ratio Calculator ---\n";

    double loanAmount = readPositiveDouble("Enter total loan amount: ");
    double income = 0;

    // Special case: prevent income from being zero
    while (true) {
        income = readPositiveDouble("Enter your annual income: ");
        if (income == 0) {
            cout << "Income cannot be zero. Please enter a non-zero income.\n";
        } else {
            break;
        }
    }

    double ratio = loanAmount / income;

    cout << fixed << setprecision(2);
    cout << "\nLoan-to-Income Ratio: " << ratio << endl;

    // Optional: categorize risk
    if (ratio > 3.5)
        cout << "Warning: High loan-to-income ratio.\n";
    else if (ratio > 2.5)
        cout << "Moderate risk.\n";
    else
        cout << "Low risk.\n";

    return 0;
}

