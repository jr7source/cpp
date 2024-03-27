// template<typename T> 

#include <iostream>
#include <string>
using namespace std;

template<typename T>
T maxValue(T value1, T value2) {
	if (value1 > value2)
		return value1;
	else
		return value2;
}

int main() {

	cout << "Maximum between 1 and 3 is " << maxValue(1, 3) << endl;
	cout << "Maximum between 1.5 and 0.3 is "<< maxValue(1.5, 0.3) << endl;
	cout << "Maximum between 'A' and 'N' is " << maxValue('A', 'N') << endl;
		 
	cout << "Maximum between \"NBC\" and \"ABC\" is " << maxValue(string("NBC"), string("ABC")) << endl;
		 
	return 0;
}

//how to declare a class template

template<typename T, int capacity>
class stack
{
public:
	//add methods, parameters, constructors, destructors, 
	

private:

stack();

};

// vector defn --> vector<int> intVector;


//2d vector	   --> 
//vector<vector<int>> matrix(4);					4 rows
//	for (unsigned i = 0; i < 4; i++)
//		 matrix[i] = vector<int>(3);				3 collumns each