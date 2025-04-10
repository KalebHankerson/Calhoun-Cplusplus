#include <iostream>
#include <vector>
using namespace std;

//void function because the function doesn't return a value so making it int would cause an error
void arrayPrac(const int numArr[], int size, int n){
   
    //bool to use later as a failsafe if no number is greater than n
    bool greaterThan = false;
    
    /* for loop prints numbers that are greater than n, it counts sequentially from element to element until it reaches
    the user given size. it also marks the bool as true to not proc the if statement below */ 
    for(int i = 0; i < size; i++){
        if (numArr [i] > n){
            /* this if statement only prints once after the loop has iterated and it being in the loop also prevents it from printing
            when none of the numbers in the array are greater than n */
            if (!greaterThan){
                cout << "The numbers in the array greater than " << n << " are:  ";
            }
            cout << numArr [i] << " ";
            greaterThan = true;
        }
    }
    
    //if statement for if no number is greater than n
    if (!greaterThan){
        cout << "None of the numbers are greater than " << n << endl;
    }
 }


int main(){
    //initizaling size variable for the array
    int size;
    
    //message informing the user of what the program does
    cout << "This program will let you enter the size of an array, enter the numbers to be added to it, " << 
    "and also choose an additional number to compare it to. The numbers in the array greater than the additional number will be printed to you." << "\n";

    
    //prompting user to enter the size of the array
    cout << "Enter the size of the array." << "\n";
    cin >> size;
    
    //using vector to control the size of the array dynamically given the user input
    vector<int> numArr(size);
    
    //for loop to add each number to the array. it also uses i to label each number so the user knows how many numbers they have added.
    for (int i = 0; i < size; i++){
        cout << "Enter number " << (i + 1) << ": " << "\n";
        cin >> numArr[i];
    }

    //prompting user for number, n, to be compared against the array
    int n;
    cout << "Enter a number." << '\n';
    cin >> n;
    
    //calls the function with the first argument passing the raw array, the second passing the size, and the third passing the user input of n
    arrayPrac(numArr.data(), size, n);

    return 0;
}