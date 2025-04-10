#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
/*
A movie theater shows a movie. The theater receives 20% of the profit and the distributor receives 80% of the profit. The adult ticket price is $10.00 and the child ticket is $6.00. Find the gross profit, the theater’s profit, and the distributor’s profit.
*/
int main()
{

const float dist_fee = 0.80;
int adultTix, childTix;
float adultTicket = 10.00;
float childTicket = 6.00;
float grossProfit;
float theaterProfit;
float distProfit;
string movieName;

cout << fixed << setprecision(2);

cout << "What was the movie name?" << "\n";
cin >> movieName;
cout << "How many adult tickets were sold?" << "\n";
cin>>adultTix;
cout << "How many child tickets were sold?" << "\n";
cin >> childTix;

grossProfit = (childTix * childTicket) + (adultTix * adultTicket); 

theaterProfit = grossProfit * 0.20;
distProfit = grossProfit * 0.80;

cout << "Gross profit is " << grossProfit << "\n";
cout << "The theater's profit is " << theaterProfit << "\n";
cout << "The distributor's profit is " << distProfit << "\n";

return 0;
} 
