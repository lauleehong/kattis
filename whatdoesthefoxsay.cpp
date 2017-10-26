#include <bits/stdc++.h>
using namespace std;

/*
1
toot woof wa ow ow ow pa blub blub pa toot pa blub pa pa ow pow toot
dog goes woof
fish goes blub
elephant goes toot
seal goes ow
what does the fox say?
*/

int main() {
	int num_TC;
	string speech;

//	freopen("test_input.txt", "r", stdin);

	cin >> num_TC;
	getline(cin, speech);		// flush cin
	
	while(num_TC--) {

		string word;

		getline(cin, speech);
		stringstream strstr(speech);
		
		vector<string> v_final;
		set<string> set_words;

		for (int i=0; strstr>>word; ++i) {
			v_final.push_back(word);		// original speech
			set_words.insert(word);			// our dictionary of "legitimate words" from the fox
		}

		cin >> word;
		while (word.compare("what") != 0) {
			cin >> word;	// useless middle word
			cin >> word;	// read action sound

			set_words.erase(word);	// remove the sound from the our dic of words

			cin >> word;
		}

		getline(cin, speech);		// flush cin

		for(auto it = v_final.begin(); it != v_final.end(); ++it){
            if(set_words.find(*it) != set_words.end()){
                cout << *it << " ";
            }
        }
        cout << endl;
	}
}