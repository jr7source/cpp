// chap3.cpp : This file contains the 'main' function. Program execution begins and ends there.
// 1 = true, 0 = false
// rand() function 
// To obtain a random integer between 0 and 9, use rand() % 10 
// && : AND gate, || : OR gate, ! : NOT gate

// y = x > 0 ? 1 : -1;

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//functions 

    int subtractionQuiz();
    void switchCaseEx(int a); // Updated the return type to 'void'

int main() {

    srand(time(0));

    int number = rand();
    bool even = number % 2 == 0;
    int subtraction;

    cout << even << endl;
    cout << number << endl;

    subtraction = subtractionQuiz();
    cout << subtraction <<  endl;

    int a = 2;
    switchCaseEx(a);

    bool b = a > 0 ? true : false;
    cout << b;

    return 0;
}

int subtractionQuiz() {

    int x = rand() % 10;
    int y = rand() % 10;
    int t; // identifier for swapping

    if (y > x) {
        t = x;
        x = y;
        y = t;
    }

    return x - y;
}

void switchCaseEx(int a) { // Updated the return type to 'void'

    switch (a)
    {
    case 0: cout << " 0 ";
        break;
    default: cout << "not 0\n";

    }
}
