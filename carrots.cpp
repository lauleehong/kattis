#include <bits/stdc++.h>
using namespace std;

/*
2 1
carrots?
bunnies
*/

int main(){

	int contestants, carrots;
	string temp;

//	freopen("test_input.txt", "r", stdin);
	
	cin >> contestants >> carrots;

	while (contestants--)
		getline(cin, temp);

	cout << carrots << endl;
}