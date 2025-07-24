/*
Project Name : Chapter 3 Exercise 17 - Math Tutor
File Name : Chapter3Ex17.cpp
Programmer : Mark Goldstein
Date : 07 / 2025
Requirements :
    The program should then pause while the student works on the problem.
    When the student is ready to check the answer, he or she can press a key and 
    the program will display the correct solution :



    Part 2:

This is a modification of Programming Challenge 17 from Chapter 3. 
Write a program that can be used as a math tutor for a young student.
The program should display two random numbers that are to be added :

The program should wait for the student to enter the answer.If the answer is correct, 
a message of congratulations should be printed.
If the answer is incorrect, a message should be printed showing the correct answer.
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <random>

using namespace std;


#include <iostream>

int main()
{
    int number1, number2,answer;
    string numberString;
    random_device rd;
    uniform_int_distribution<int>randomInt(0, 1000);
    number1 = randomInt(rd);
    number2 = randomInt(rd);
     
    numberString = "+" + to_string(number2);
    cout << setw(15) << right << number1 << endl;
    cout << setw(15) << right << numberString << endl;
    cout << "_______________" << endl;
    cout << "When you are ready enter your answer:";
    cin >> answer;
    if (answer == number1 + number2)
        cout << " You are correct";
    else
        cout << "Sorry the correct answers is:  " << number1 + number2;

    
    //cin.ignore();
  //  cout << setw(15) << right << number1 + number2 << endl;
    
}

 