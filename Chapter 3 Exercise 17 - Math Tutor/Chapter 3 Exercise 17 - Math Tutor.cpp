/*
Project Name: Chapter 3 Exercise 17 - Math Tutor
File Name: Chapter2Ex2.cpp
Programmer: Mark Goldstein
Date:07/2025
Requirements:
  
  Write a program that can be used as a math tutor for a young student. 
  The program should display two random numbers to be added, such as
    247 
  + 149
  ______
  The program should then pause while the student works on the problem. 
  When the student is ready to check the answer, he or she can press a key and 
  the program will display the correct solution:

    247
  + 149
  ______
    376

*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    int number1, number2;
    cout << "Please enter a number:"  ;
    cin >> number1;
    cout << "Please enter a second number:";
    cin >> number2;
   
    cin.ignore();
    
    string numberString = "+" + to_string(number2);
    cout << setw(15) << right << number1<< endl;
    cout << setw(15) << right << numberString << endl;
    cout << setw(15) << "_______" << endl;
    cout << "Please hit the <enter> key when you are ready for the answer" << endl;
    cin.get();
    cout << setw(15) << right << number1 + number2 << endl;




}

 