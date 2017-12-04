#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

/*
2
7
saskatoon
toronto
winnipeg
toronto
vancouver
saskatoon
toronto
3
edmonton
edmonton
edmonton
*/


int main() {

	int tc, n;
	string temp;

//	freopen("test_input.txt", "r", stdin);
	cin >> tc;

	while(tc--){
		cin >> n;
		unordered_set<string> s;

		while(n--){
			cin >> temp;
			s.insert(temp);
		}
		cout << s.size() << endl;
	}



}