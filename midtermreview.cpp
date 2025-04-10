// Chapter 5, Programming Challenge 7: Pennies for Pay
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
int maxDays; // To hold the number of days
double pay; // The pay for any given day
double grandTotal; // The total pay
// The pay variable must start with 0.01. That is
// the pay for the first day.
pay = 0.01;
// The grandTotal variable is an accumulator, so
// it must start at zero.
grandTotal = 0.0;
// Get the number of days from the user.
cout << "For how many days will the pay double? ";
cin >> maxDays;
// Validate the number of days, which must be at
// least one.
while (maxDays < 1)
{
cout << "The number of days must be at least one.\n";
cout << "Enter the number of days: ";
cin >> maxDays;
}
// Display the table headings.
cout << "\nDay\t\tTotal pay\n";
cout << "---------------------------------\n";
// Set the numeric output formatting.
cout << setprecision(2) << fixed;
// Display the table data
for (int day = 1; day <= maxDays; day++)
{
// Display the day number and the
// amount of pay for the day.
cout << day << "\t\t$"
<< pay << endl;
// Add the pay for the day to grandTotal.
grandTotal += pay;
// Double the pay for the next day.
pay *= 2;
}
// Display the grand total.
cout << "---------------------------------\n";
cout << "Total" << "\t\t$"
<< grandTotal << endl;
return 0;
}