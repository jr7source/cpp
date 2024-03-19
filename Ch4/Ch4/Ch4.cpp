// Ch4.cpp : This file contains info about cmath header file
// pow(a,b) = a ^ b, rand()
//author: Jatin Ramchandani

/*  Notes

    sin(radians) Returns the trigonometric sine of an angle in radians.
    cos(radians) Returns the trigonometric cosine of an angle in radians
    tan(radians) Returns the trigonometric tangent of an angle in radians.
    asin(a)      Returns the angle in radians for the inverse of sine.
    acos(a)      Returns the angle in radians for the inverse of cosine.
    atan(a)      Returns the angle in radians for the inverse of tangent.   

    1 degree = pi/180 radians
    1 rad    = 180/pi degrees

    exp(x) Returns e raised to power of x (e^x)
    log(x) Returns the natural logarithm of x (ln(x) = loge(x)).
    log10(x) Returns the base 10 logarithm of x (log10(x)).
    pow(a, b) Returns a raised to the power of b (a,b).
    sqrt(x) Returns the square root of x (2x) for x 7 = 0

    E is a constant with value 2.71828

    ceil(x) x is rounded up to its nearest integer. This integer is returned as a double value.
    floor(x) x is rounded down to its nearest integer. This integer is returned as a double value.

*/
/*
    A character [char] represents a single character
    \b can be used to delete a single char etc..
    \n is new line feed 

*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cctype>
#include <string.h>
#include <Windows.h>
#include <iomanip>
#include <fstream>

void castingChar2Int();
void ToUppercase();
void randomChar();
void lowerCaseChar();
void CharacterFunctions();

using namespace std;

int main()
{
    /*char letter = 'A';
    char letter2 = 'B';
    cout << letter << letter2;
    cout << "\nHe said \"Programming is fun\"" << endl;

    //string didnt work inside the seperately declared funtion
    
    string message = "Programming is fun (really ?)";
    cout << message << endl;
    cout << message.length() << endl;
    cout << message.size() << endl;
    cout << message.at(0) << endl;

    string name = "Jastin";
    name[2] = NULL;
    cout << name << endl;

    string surname = "Ramchandani";
    string full_name = name + ' ' + surname;

    cout << full_name << endl;
    cout << full_name[7] << " is the initial from ur surname" << endl;

    string s = "";
    string cities = s + "Singapore" + " & " + "Malaysia ";
    cout << cities << endl; */

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
    string yes_no;
    cout << "Do you wanna know which city you belong to?" << endl;
    cin >> yes_no;

    //city[0] = toupper(city[0]);
    string y = "yes!";
    if (yes_no == y) {

        SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
        cout << "X_X you belong in Amsterdam! " << endl;

    }

    else
        return 0;

    float Msoft = 9.23;
    cout << "Microsoft's stock rate at the moment is " << fixed << showpoint << setprecision(3) << Msoft << endl;

    //CharacterFunctions();

    //lowerCaseChar();

    //randomChar();
    
    //castingChar2Int(); 

    //ToUppercase();

    cout << setw(10) << "C++" << setw(6) << 101 << endl;
    cout << setw(8) << "Java" << setw(5) << 101 << endl;
    cout << setw(6) << "HTML" << setw(4) << 101 << endl;
    cout << left;
    cout << setw(6) << 21.23 << endl;
    cout << setw(6) << 51.34 << endl;

    ofstream output;
    output.open("numbers.txt");
    output << 1 << " " << 2;
    output.close();

    ofstream numbers("numbers.pdf");

    return 0;
}

void castingChar2Int() { 

    //function to test casting of char into integer type

    int j = 2 + 'a';
    cout << j << " is the ASCII value for " << static_cast<char>(j) << endl;

}

void ToUppercase() {

    //Program to convert any lowercase letter to upper case

    char a;
    cout << "\nPlease enter a char" << endl;
    cin >> a;
    cout << "\nIn upper case that would be " << static_cast<char>(a -= 32) << endl;

}

void randomChar() {

    //a + rand() % b, Returns a random number between a and a + b, excluding a + b &&  for 50 + rand( ) % 50 to 99 is the range

    srand(time(0));
    int x = rand() % 257;
    cout << static_cast<char>(x);

}

void lowerCaseChar() {

    srand(time(0));
    int y = 97 + rand() % 26;
    cout << static_cast<char>(y);

}

void CharacterFunctions() {

    char z;
    cout << "please enter any character that you please" << endl;
    cin >> z;

    if (islower(z)) {
        cout << "lower case letter" << endl;
        cout << static_cast<char>(toupper(z));
    }
    else if (isupper(z)) {
        cout << "upper case letter" << endl;
        cout << static_cast<char>(tolower(z));
    }
    
    if (isdigit(z))
        cout << "you've entered the number " << z;
    else if (isspace(z))
        cout << " white space character " << endl;


}




