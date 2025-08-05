/*
Project Name : Chapter 3 Exercise 19 - Monthly Payments
File Name : Chapter3Ex19.cpp
Programmer : Mark Goldstein
Date : 07 / 2025
Requirements:

The monthly payment on a loan may be calculated by the following formula:  
Rate x (1 + Rate}H  Payment = x L  ((1+Rate}H - 1}
Rate is the monthly interest rare, 
which is the annual interest rare divided by 12.  
(12 percent annual inrerest would be 1 percent monthly interest.) 
N is rhe number of  payments, and L is the amount of the loan. 
Write a program that asks for these values  
then displays a report similar to:  
Loan Amount: $10000.00  
Monthly I nterest Rate: 1%  
Number of Payments: 36  
Monthly Payment: $332 .14  
Amount Paid Back: $11957.15  
Interest Paid: $1957.15 
*/
 
#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>

using namespace std;
   


#include <iostream>
#include <iomanip>
#include <string>
#include <random>
#include <math.h>

using namespace std;
int main()
{
    double annualRate,monthlyRate, loanAmount,payment;
    int numberOfPayments, years;
    cout << "Please enter the annual interest rate ( whole number)" << endl;
    cin >> annualRate;
    cout << "Please enter the number of years for the loan ( as a decimal number)" << endl;
    cin >> years;
    cout << "Please enter the amount of the loan:" << endl;
    cin >> loanAmount;
    numberOfPayments = years * 12;

    monthlyRate = annualRate/12/100;
    

    payment = ((monthlyRate * pow((1 + monthlyRate), numberOfPayments)) / (pow((1 + monthlyRate), numberOfPayments) - 1)) * loanAmount;
    // use setprecision and fixed to format numbers as currency
    cout << setprecision(2)<<fixed;
    // use setw and left or right to align columns
    string sLoanAmount = "$" + to_string(std::round(loanAmount));
    cout <<setw(25)<<left << "Loan amount:" <<setw(15) << right <<  sLoanAmount << endl;
    cout << setw(25) << left << "Monthly Interest Rate:" << setw(15) << right << "$" <<monthlyRate*100<<endl;
    cout << setw(25) << left << "Number of Payments:" <<    setw(15) << right  << numberOfPayments << endl;
    cout << setw(25) << left << "Monthly Payment:" <<    setw(15) << right   <<payment << endl;
    cout << setw(25) << left << "Amount Paid Back:" <<    setw(15) << right   <<payment*36 << endl;
    cout << setw(25) << left << "Interest paid:" <<     setw(15) << right   <<(payment * 36) - loanAmount << endl;


}

