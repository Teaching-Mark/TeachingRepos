// Chapter5Examples.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
   //page 237
	int num=0;
	num = num + 1;
	cout << num<<endl;
	num += 1;
	cout << num << endl;

	num = num - 1;
	cout << num << endl;
	num -= 1;
	cout << num << endl;

	num = 4;
	cout << "The variable num is " << num << endl;
	cout << "I will now increment num.\n\n";

	num++;  
	cout << "Now the variable num is " << num << endl;
	cout << "I will increment num again\n\n";

	++num;
	cout << "Now the variable num is " << num << endl;
	cout << "I will decrement num \n\n";

	num--;
	cout << "Now the variable num is " << num << endl;
	cout << "I will decrement num again\n\n";
	--num;

	cout << "Now the variable num is " << num << endl;

	//The difference between Postfix and Prefix page 239
	num = 4;

	cout << num << endl;
	cout << num++ << endl;//postfix
	cout << num << endl;
	cout << ++num << endl;//prefix
	cout << endl;

	cout << num << endl;
	cout << num-- << endl; //postfix
	cout << num << endl;
	cout << --num << endl;//prefix
	cout << endl;


	int x, y;
	x = 1;
	y = x++;  //postfix
	cout << y;
	y = ++x; //prefix

	//page 241
	int a, b, c;
	a = 2;
	b = 5;
	c = a * b++;//postfix
	cout << a << " " << b << " " << c;
	c = a * ++b;//prefix
	cout << a << " " << b << " " << c;

	// Using ++ and -- in Relational Expression;
	x = 10;
	if (x++ > 10)
		cout << "x is greater than 10.\n";
	
	//in class checkpoint
	x = 2;
	y = x++;
	cin.get();
	cout << x << y;

	cin.ignore();
	x = 2;
	y = ++x ;
	cin.get();
	cout << x << y;

	cin.ignore();
	x = 99;
	if (x++ < 10)
	{
		cin.get();
		cout << "True\n";
	}
	else
	{
		cin.get();
		cout << "False\n";
	}
	cin.ignore();

	 









}

 