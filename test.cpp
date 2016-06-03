/*
 * factorial.cpp
 *
 *  Created on: May 30, 2016
 *      Author: olasupo
 */

#include<iostream>
using namespace std;

int factorial(int Num);

int main()
{
	int x;
	cout<< "enter a number"<< endl;
	cin >> x;
	cout <<"factorial of "<< "x" << " is " << factorial(x) << endl;

}

int factorial(int Num)
{
	if( Num<=1 )
		return 1;
	else
		return factorial(Num-1)*Num;

}
