//Kaleb Hankerson
//3-11-2025


#include <iostream>
//This function is here to gather the scores of the assigments and add them together.
int getScore(int assignCount){
    int score;
    int totalScore = 0;
    for (int i =0; i < assignCount; i++){
        std::cout << "What is the score of the assignment?" << '\n';
        std::cin >> score;
        //This checks to make sure the input is a whole number between 0-100.
        while (score > 100 || score < 0 || std::cin.fail() || std::cin.peek() != '\n'){
                std::cout << "Please enter a non-decimal score between 0-100." << '\n';
                std::cin.clear();
                std::cin.ignore(1000, '\n');
                std::cin >> score;
        }
        totalScore += score;
    }
    return totalScore;
}
//This calculates the average of the grades.
int gradeAverage(int totalScore, int assignCount){
     int avgGrade;
     avgGrade = totalScore / assignCount;
     return avgGrade;
}

//This calculates the grade based off of the average from the scores.
char gradeCalc(int avgGrade){
    char grade;
    if (avgGrade >= 90){
        grade = 'A';
    } else if(avgGrade <= 89 && avgGrade >= 80){
        grade = 'B';
    } else if(avgGrade <= 79 && avgGrade >= 70){
        grade = 'C';
    } else if(avgGrade <= 69 && avgGrade >= 60){
        grade = 'D';
    } else if(avgGrade <= 59 && avgGrade > 0){
        grade = 'F';
    } else {

    }
    return grade;
}
//Main function to calculate the grades using the previously made functions.
int main(){
    int assignCount, totalScore, avgGrade;
    char grade;

    std::cout << "What number of assignments are going to be entered?: ";
    std::cin >> assignCount;
    //This checks to make sure the input is a positive whole number.
    while (assignCount < 0 || std::cin.fail() || std::cin.peek() != '\n'){
        std::cout << "Please enter a positive integer." << '\n';
        std::cin.clear();
        std::cin.ignore(1000, '\n');
        std::cin >> assignCount;
    }
    //Storing the returned values from the functions.
    totalScore = getScore(assignCount);
    avgGrade = gradeAverage(totalScore, assignCount);
    grade = gradeCalc(avgGrade);
    

    //Displaying the results to the user.
    std::cout << "Your average grade was " << avgGrade << " and your grade was a(n) " 
    << grade << "." << '\n';

    return 0;
}
