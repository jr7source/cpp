// Ch3_exercise.cpp : This file contains the 'main' function. Program execution begins and ends there.
//solutions to chapter 3 exercises

#include <iostream>
#include <ctime>
#include <cmath>

using namespace std;
int firstBySecond(int a, int b);		//problem 3.2
void revsort3(int a, int b, int c);     //problem 3.7
void rockPaperScissor();				//problem 3.15
void geometricCircle();					//problem 3.19


int main()
{
	//problem 3.2
	int x = firstBySecond(6, 3);
	x == 1 ? cout << "divisible" << endl : cout << "not divisible" << endl;

	//problem 3.7
	//revsort3(5, 434, 12);

	//problem 3.15
	//rockPaperScissor();

	//problem 3.19
	//geometricCircle();

	cout << "\n";

	return 0;

}

int firstBySecond(int a, int b) {

	int i = a % b == 0 ? 1 : 0;
	return i;

}

void revsort3(int a, int b, int c) {

	if (a > b) {
		if (a > c) {
			if (b > c)
				cout << a << " " << b << " " << c << " " << endl;
			else if (c > b)
				cout << a << " " << c << " " << b << " " << endl;
		}
	}
	
	else if (b > a) {
		if (b > c) {
			if (a > c)
				cout << b << " " << a << " " << c << " " << endl;
			else if (c > a)
				cout << b << " " << c << " " << a << " " << endl;
		}
		else
			cout << c << " " << ((a > b) ? a : b) << ((a > b) ? b : a);
			
	}

	

}

void rockPaperScissor() {

	int userIP,compIP;

	cout << "\nRules: 0 = Stone, 1 = Paper, 2 = Scissor\n";
	cout << "enter your choice:\n ";
	cin >> userIP;
	
	srand(time(0));
	compIP = rand() % 3; //gives 0, 1, or 2;

	cout << "User chose " << ((userIP == 0) ? "Stone " : (userIP == 1) ? "Paper " : "Scissor ") << "& the Pc chose " << ((compIP == 0) ? "Stone " : (compIP == 1) ? "Paper " : "Scissor ") << endl;

	if (userIP == 0) {

		if (compIP == 0)
			cout << "Draw";

		if (compIP == 1)
			cout << "PC wins";

		if (compIP == 2)
			cout << "User wins";
	}

	if (userIP == 1) {

		if (compIP == 0)
			cout << "User wins";

		if (compIP == 1)
			cout << "Draw";

		if (compIP == 2)
			cout << "PC wins";
	}

	if (userIP == 2) {

		if (compIP == 0)
			cout << "PC wins";

		if (compIP == 1)
			cout << "User wins";

		if (compIP == 2)
			cout << "Draw";
	}

}

void geometricCircle() {

	int x, y;
	float rad;
	cout << "\nPlease enter the coordinates\n";
	cin >> x;
	cin >> y; cout << endl;
	rad = pow((pow(x, 2) + pow(y, 2)), 0.5);

	if (rad <= 10)
		cout << "\ninside the circle";
	else
		cout << "outside the circle";

}

