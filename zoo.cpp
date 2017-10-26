#include <bits/stdc++.h>
using namespace std;

/*
6
African elephant
White tiger
Indian elephant
Siberian tiger
Tiger
Panda bear
1
Blue Russian Penguin
0
*/

int main() {

	int cases, counter=0;
	string phrase, animal;
	set<string> animal_list;
	multiset<string> occurances;

//	freopen("test_input.txt", "r", stdin);
	cin >> cases;
	
	while(cases) {
		counter++;
		getline(cin, phrase);		// flush cin
		animal_list.clear();		// clear our set
		occurances.clear();			// clear our multiset

		for (int i=0; i<cases; i++){
			getline(cin, phrase);
			transform( phrase.begin(), phrase.end(), phrase.begin(), ptr_fun <int, int> ( tolower ) );	// all cin will be transformed to lowercase
			animal = phrase.substr(phrase.find_last_of(" ' ' ")+1);	
			animal_list.insert(animal);
			occurances.insert(animal);
		}
		cout << "List " << counter << ":" << endl;
		for(auto it = animal_list.begin(); it != animal_list.end(); it++)
        	cout << *it << " | " <<  occurances.count(*it) << endl;
		
		cin >> cases;
	}
}