/*
Kaleb Hankerson
A01360919
2-11-25
*/


#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    //declaring variables to pass bills into
    double elec, water, gas, misc;

    cout << "Let's calculate how much you spent on utilities this month." << "\n";
    
    //electricity variable
    cout << "How much did you spend on electricity this month? " << "\n";
    cin >> elec;
    
    //water variable
    cout << "How much did you spend on water this month? " << "\n";
     cin >> water;
   
    //gas variable
    cout << "How much did you spend on gas this month? " << "\n";
    cin >> gas;
    
    //misc fee variable
    cout << "How much did you spend on miscellaneous costs this month? " << "\n";
    cin >> misc;
   
    //variable to calculate the total bill for the month
    double total = elec + water + gas + misc;
    
    //output statement formatted to look neat using setw manipulator and left manipulator
    cout << left << setw(20) << "Electricity" << setw(20) << "Water" << setw(20) << "Gas" 
    << setw(20) << "Misc" << setw(20) << "Total" << endl;
    
    //formatting numbers to only have 2 decimal places for money
    cout << fixed << setprecision(2);
   
    //output statement formatted to look neat using setw manipulator and left manipulator
    cout << "$" << left << setw(19) << elec << "$" << left << setw(19) << water << "$" 
    << left << setw(19) << gas << "$" << left << setw(19) << misc << "$" << left << setw(19) << total << endl;

    return 0;


 }
