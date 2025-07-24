/*
Project Name: Chapter 2 Exercise 1 - Sum of two numbers
File Name: Chapter2Ex1.cpp
Programmer: Mark Goldstein
Date:07/2025
Requirements:
    Write a program that stores the integers 50 and 100 in variables, 
    and stores the sum of these two in a variable named total.


*/

#include <iostream>
#include <iomanip>  // to format output
using namespace std;

int main()
{
    int number1 = 50;
    int number2 = 100;
    int total = number1 + number2;
    //display results
    //using iomanip to format the output
    cout <<setw(10)<< right<<number1 << endl << setw(10) << right<< number2 << endl;
    cout << "__________" << endl;
    cout << setw(10) << right << total << endl;

}

