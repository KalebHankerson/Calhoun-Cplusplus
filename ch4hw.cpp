/*
Kaleb Hankerson
A01360919
2-11-2025
*/


#include <iostream>
#include <iomanip>
#include <string>

int main(){
    //declaring string variables to store name and nationality
    std::string name, nationality;
    //declaring int variable to store age
    int age;
    //declaring char variable to store citizenship
    char citizen;

    std::cout << "Let's see if you can vote in the state of Alabama." << "\n";
    
    //prompting user to input name
    std::cout << "What is your name?" << "\n";
    std::cin >> name;
    
    //prompting user to input age
    std::cout << "What is your age?" << "\n";
    std::cin >> age;
   
    //prompting user to input nationality
    std::cout << "What is your nationality" << "\n";
    std::cin >> nationality;
    
    //prompting user to input citizenship
    std::cout << "Are you a U.S. citizen? Answer Y or N." << "\n";
    std::cin >> citizen;
    
    //displaying inputs back to user
    std::cout << name << ", you entered " << age << " as your age, " <<
    nationality << " as your nationality, and " << citizen << " in response to your citizenship." << std::endl;

    //if, else statement to check for eligibility to vote
    //if checks for age that is equal or greater than 18 and citizenship, name and nationality are not required to be something
    if((age >= 18) && (citizen == 'Y')){
        std::cout << "You can vote in the state of Alabama." << std::endl;

    }
    //else for anything age under 18 or N for citizenship
    else{
        std::cout << "You can not vote in the state of Alabama." << std::endl;

    }
    return 0;
    
}