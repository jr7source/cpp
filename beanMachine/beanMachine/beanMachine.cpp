#include <iostream>
#include <time.h>
#include <string.h>
#include <iomanip>

using namespace std;

string LRgenerator(int length);

int main()
{
    int numOfSlots;
    cout << "Please enter the number of slots" << endl;
    cin >> numOfSlots;
    int slots[50] = { 0 };

    int numOfBalls;
    cout << "Please enter the number of balls" << endl;
    cin >> numOfBalls;

    srand(time(0));

    cout << "Pathways = \n";

    string path;
    

    for (int i = 0; i < numOfBalls; i++) {
        
        path = LRgenerator(numOfSlots - 1);
        cout << path <<" ";
        
        int temp = 0;
        for (int j = 0; j < path.length(); j++) {
            if (path[j] == 'R') temp++;
            
        }
        slots[temp]++;

        cout << temp << endl;
   
    }

    cout << "\n";
 
    for (int i = 0; i < numOfSlots; i++) {
        cout << setw(3) << i << " |";
        for (int j = 0; j < slots[i]; j++) {
            cout << " O";
        }
        cout << endl;
    }

    return 0;

}

string LRgenerator(int length) {

    string random;
    for (int i = 0; i < length; i++) {
        char LR = (rand() % 2 == 0) ? 'L' : 'R';
        random += LR;
    }
    return random;
}

