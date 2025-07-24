/*
Project Name: Chapter 2 Exercise 2 - Sales Prediction
File Name: Chapter2Ex2.cpp
Programmer: Mark Goldstein
Date:07/2025
Requirements:
    The East Coast sales division of a company generates 58 percent of total sales. 
    Based on that percentage, write a program 
    that will predict how much the East Coast division 
    will generate if the company has $8.6 million in sales this year.


*/
#include <iostream>
#include <iomanip>
using namespace std;

// use constant
double const EAST_COAST_SALES_PERCENTAGE = 0.59;


int main()
{
    double companySales = 8.6E6;
    double divisionSales = companySales * EAST_COAST_SALES_PERCENTAGE;

    cout <<"East coast sales division earned "<< fixed << setprecision(2) << divisionSales << "out of total sales of "<<companySales<<endl;

}

 