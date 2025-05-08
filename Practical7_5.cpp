/*
A university administration is developing a system to display student marks in a structured and visually
appealing format. The goal is to ensure clarity in academic reports by properly aligning names and
scores while also demonstrating the use of currency formatting for tuition fees or other financial data.
To achieve this, built-in stream manipulators such as endl, setw, setfill, and setprecision must be used
to create a neatly formatted output.
The system first reads student names and their corresponding marks, ensuring that the data is aligned
in tabular form. Proper spacing between columns enhances readability, preventing misalignment
issues caused by varying name lengths or mark values. Additionally, numerical values must be
displayed with controlled decimal precision for consistency.
Beyond academic scores, the university also wants to format financial figures, such as tuition fees, in
a standardized manner. To achieve this, the system includes a user-defined manipulator, currency(),
which prepends a specified currency symbol (₹, $, etc.) before displaying monetary values. This custom
formatting ensures that financial data is both readable and professionally presented.
*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// User-defined manipulator for formatting currency
ostream& currency(ostream& os) {
    return os << "₹";
}

void displayReport() {
    // Example student data
    string students[] = {"Darshan", "Kishan", "Prince", "Yash"};
    double marks[] = {98.5, 93.0, 96.4, 91.2};
    double tuitionFees[] = {50000.75, 48000.50, 53000.25, 49000.00};

    cout << "\n--- Student Marks and Tuition Fees ---\n";

    // Header
    cout << left << setw(20) << "Name"
         << setw(10) << "Marks"
         << setw(15) << "Tuition Fee" << endl;

    // Underline
    cout << setfill('-') << setw(20) << ""
         << setw(10) << ""
         << setw(15) << "" << setfill(' ') << endl;

    // Data rows
    for (int i = 0; i < 4; ++i) {
        cout << left << setw(20) << students[i]   // Name
             << setw(10) << fixed << setprecision(1) << marks[i]  // Marks with 1 decimal
             << setw(2) << "$" << fixed << setprecision(2) << tuitionFees[i] << endl;  // Tuition fee with ₹ and 2 decimals
    }
}

int main() {
    displayReport();
    return 0;
}

