/*
Project Name: Chapter 2 Exercise 20 - How much paint
File Name: Chapter2Ex2.cpp
Programmer: Mark Goldstein
Date:07/2025
Requirements:
   A particular brand of paint covers 340 square feet per gallon. 
   Write a program to determine and report approximately 
   how many gallons of paint will be needed to paint two coats 
   on a wooden fence that is 6 feet high and 100 feet long.

*/
#include <iostream>
#include <iomanip>
using namespace std;
double const FEET_PER_GALLON = 340;

int main()
{
    double height;
    double length;
    cout << "How high is your fence?" << endl;
    cin >> height;
    cout << "How long is your fence" << endl;
    cin >> length;


    cout << round((height * length) / FEET_PER_GALLON) << " Gallons of paint will be needed."<<endl;
     
}

 