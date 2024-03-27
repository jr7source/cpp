#include<iostream>
#include<vector>

using namespace std;

template<typename T>
void addvector(vector<T>& v1, vector<T>& v2) {

	int i = 0;
	int add = 0;
	for (int i = 0; i < v1.size(); i++) {
		add += v1[i] + v2[i];
	}

	cout << "sum of two vectors: " << add;

}

int main() {

	cout << "please enter 3 values ";
	vector<int> one(3);
	vector<int> two(3);

	for (int i = 0; i < 3; i++)
		cin >> one[i];

	cout << "please enter another 3 values ";
	for (int i = 0; i < 3; i++)
		cin >> two[i];

	addvector(one, two);

	return 0;

}
