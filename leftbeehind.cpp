#include <bits/stdc++.h>
using namespace std;

/*
17 3
13 14
8 5
44 44
0 0
*/

int main() {

    int sweet, sour;

//  freopen("test_input.txt", "r", stdin);
    cin >> sweet >> sour;

    while(sweet!=0 || sour!=0){

        if ((sweet+sour)==13) 
            cout << "Never speak again." << endl;
        else if (sweet == sour)
            cout << "Undecided." << endl;
        else if(sweet > sour)
            cout << "To the convention." << endl;
        else
            cout << "Left beehind." << endl;

        cin >> sweet >> sour;
    }
} 