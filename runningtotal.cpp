/*
Kaleb Hankerson
A01360919
2-18-2025
*/

#include <iostream>
//using fstream to make use of files to store and output the user given numbers
#include <fstream>

int main(){
    //declaring x variable for user given range, y for storing total and individual numbers, total for running total
    int x, y, total;
    
    //opening or creating file for numbers
    std::ofstream outFile("numbers.txt");
    
    //prompting user for range
    std::cout << "How many numbers would you like to use to calculate a running total? (maximum of 20)" << '\n';
    
    //validating user input ensuring no floating point numbers or negative integers pass
    while(true){
        std::cin >> x;
        if(std::cin.fail() || x < 1 || x > 20){
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            std::cout << "Please enter a value between 1-20. ";
        } else {
            break;
        }
    }
  
   
    //for loop to used to loop the enter number sequence based on user-given range, also adds to total and writes number given to file
    for (int i = 1; i<= x; i++){
        std::cout << "Enter number " << i << ":" << '\n';
        std::cin >> y;
       
        // "\n" used to separate numbers in file, else they would look like 65776587
        outFile << y << '\n';
        total += y;

        std::cout << "You entered: " << y << '\n' << "The running total is: " << total << std::endl;
    }
    
    //closing file now that writing is done
    outFile.close();
    
    //reading from file to print numbers
    std::ifstream inFile("numbers.txt");

    std::cout << "These are the numbers you entered: " << '\n';
    
    //while loop reads numbers from file while y still gives a value, essentially reads each number written from y
    while ( inFile >> y) {
        std::cout << y << " " << '\n';

    }
    //printing the running total
    std::cout << "The running total of " << x << " numbers was: " << total << std::endl;
    
    //closing file after reading
    inFile.close();

    return 0;
}
