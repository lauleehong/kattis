#include <bits/stdc++.h>
using namespace std;

/*
3
Simon says raise your right hand.
Lower your right hand.
Simon says raise your left hand.
*/

int main() {
	
	int n;
	string person, action, phrase;
	queue<string> action_list;

//	freopen("test_input.txt", "r", stdin);
	cin >> n;
	getline(cin, phrase);

	while(n--) {
		getline(cin, phrase);
		if(phrase.substr(0,10) == "Simon says") {
			action_list.push(phrase.substr(11, phrase.size()-1));
		}
	}

	while (!action_list.empty()){
		cout << action_list.front() << endl;
		action_list.pop();
	}
}