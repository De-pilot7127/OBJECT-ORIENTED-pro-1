#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double hours_worked, hourly_wage, gross_pay, taxes, net_pay;
    
    // Get user input
    cout << "Enter hours worked this week: ";
    cin >> hours_worked;
    cout << "Enter hourly wage: $";
    cin >> hourly_wage;
    
    // Calculate gross pay
    if (hours_worked <= 40) {
        gross_pay = hours_worked * hourly_wage;
    } else {
        // Regular pay for first 40 hours + overtime pay (time and a half)
        double regular_pay = 40 * hourly_wage;
        double overtime_hours = hours_worked - 40;
        double overtime_pay = overtime_hours * hourly_wage * 1.5;
        gross_pay = regular_pay + overtime_pay;
    }
    
    if (gross_pay <= 600) {
        taxes = gross_pay * 0.15;  
    } else {

        taxes = (600 * 0.15) + ((gross_pay - 600) * 0.20); 

        taxes = (600 * 0.15) + ((gross_pay - 600) * 0.20);  

    }
    
    // Calculate net pay
    net_pay = gross_pay - taxes;
    
    cout << fixed << setprecision(2);
    cout << "\n--- Pay Summary ---" << endl;
    cout << "Hours worked: " << hours_worked << endl;
    cout << "Hourly wage: $" << hourly_wage << endl;
    cout << "Gross pay: $" << gross_pay << endl;
    cout << "Taxes: $" << taxes << endl;
    cout << "Net pay: $" << net_pay << endl;
    
    return 0;

}
