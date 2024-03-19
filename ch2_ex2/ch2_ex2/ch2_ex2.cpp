// ch2_ex2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//  (Sum the digits in an integer) Write a program that reads an integer between 0 and 
// 1000 and adds all the digits in the integer.For example, if an integer is 932, the sum
// of all its digits is 14.

#include <iostream>
using namespace std;
int main()
{
    int x;
    int firstDigit, secondDigit, thirdDigit;
    int result;
    cout << "please enter an integer between 1 to 1000\n";
    cin >> x;

    if (x <= 1000 && x > 99)
    {
        firstDigit = (x % 10);
        secondDigit = (x / 10) % 10;
        thirdDigit = (x / 100);
        result = firstDigit + secondDigit + thirdDigit;
    }

    if (x <= 99 && x > 0)
    {
        firstDigit = (x % 10);
        secondDigit = (x / 10);
        result = firstDigit + secondDigit;
    }

    if (x == 0)
        result = 0;

    cout << "result = " << result;
    return 0;
}