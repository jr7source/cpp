#include <iostream>
#include <string>
using namespace std;



int main()
{
	int x = 0;
	int y = 0;
	string s;
	cout << "Please enter the string Consisting of R to turn right, L to turn left, and G to push by one unit" << endl;
	cin >> s;

	int direction = 0;

	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == 'R')	direction++;
		if (s[i] == 'L')	direction--;
		if (s[i] == 'G') {
			if (direction == 0) {
				y++;
			}
			else if (direction == 1) {
				x++;
			}
			else if (direction == 2) {
				y--;
			}
			else if (direction == 3) {
				x--;
			}
		}

	}

	cout << "final position: x = " << x << " & y = " << y;
	
	if (x == 0 && y == 0)
		return 1;

}


