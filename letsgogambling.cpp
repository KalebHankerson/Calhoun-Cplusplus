//Program that emulates a slot machine at a casino
//THE Group 2: Josh Crowe, Kaleb Hankerson, Logan Carlson
#include <iostream>
#include <cctype>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

//Function to generate a random symbol
//Selects a random item from a vector of symbols
char spin()
{
    vector <char> symbols = {'A', 'B', 'C', 'D'};
    return symbols[rand() % symbols.size()];
}
//Displays the results of the spin
void display(char s1, char s2, char s3)
{
    cout << "-----------------" << endl;
    cout << "| " << s1 << " | " << s2 << " | " << s3 << " |" << endl;
    cout << "-----------------" << endl;
}
//Function to check for a win
bool checkWin(char s1, char s2, char s3)
{
    return (s1 == s2 && s2 == s3);
}
//Main function
int main()
{
    srand(time(0)); //Seed for the random number generator
    char symbol1, symbol2, symbol3;
    int balance;
    int bet;
    cout << "Enter your balance: " << endl;
    //Input validation loop- asks for balance until user enters a number that is greater than 0
    while(!(cin >> balance) || balance <= 0)
    {
        cout << "Invalid input, please enter a number greater than zero. " << endl;
        cin.clear();
        cin.ignore(10000, '\n');
    }
    cout << "Your balance is $" << balance << endl;
    //Main loop. Runs until user balance is 0
    while (balance > 0)
    {
        cout << "Enter the amount you would like to bet: (Or enter 0 to quit)" << endl;
        cin >> bet;
        //Need to add input validation for this part
        if (bet == 0) {
            break; //Break if user enters 0 as their bet
        }
        //Check for bets greater than the balance
        else if (bet > balance) {
            cout << "Error. You cannot bet an amount greater than your current balance." << endl;
            continue; //Reset loop
        }
        //Check for negative bets
        else if (bet < 0) {
            cout << "Error, your bet must be greater than 0." << endl;
            continue;
        }
        //Subtract bet from balance
        balance -= bet;
        //Spin the slot machine by calling spin function and assigning results to each symbol variable
        symbol1 = spin();
        symbol2 = spin();
        symbol3 = spin();
        //Passing the results to the display function
        display(symbol1, symbol2, symbol3);
        //Check for a win- if checkWin, returns true, bet*2.5 is added to the balance
        if (checkWin(symbol1, symbol2, symbol3))
        {
            cout << "Congratulations, you won " << bet*2.5 << " dollars!" << endl;
            balance += bet*2.5;
        }
        else {
            cout << "Try again!" << endl;
            cout << "Current balance: $" << balance << endl;
        }
    }

    cout << "Thanks for playing! Final balance: $" << balance << endl;
    return 0;
}