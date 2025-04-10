#include <iostream>
#include <fstream>

int main(){
    std::ofstream outFile("data2.txt");
    //initializing count and j before do/while loop
    int count = 0;
    int j = 0;
    /*
    I removed the for loop and its parameters because they would never be met and were doing nothing. I also removed
    the first if statement that was related to those parameters.
    */
    do{
        //Keeping the same if statement for count in order to produce 8 numbers like the original.
        if (count++ > 7){
            break;
        } outFile << --j << " ";
    }while (j < 0);
    
    outFile.close();

    std::ifstream inFile("data2.txt");
    int value;
    while (inFile >> value) {
        std::cout << value << " ";
    }
    std::cout << std::endl;
    inFile.close();
    return 0;
}