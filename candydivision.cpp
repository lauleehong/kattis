#include <bits/stdc++.h>
using namespace std;

/*
30
*/

set<long long> s; 

int main() {

	long long n;

//	freopen("test_input.txt", "r", stdin);
	cin >> n;

	for(long long i=1; i*i <= n; i++) {
		if(n%i == 0){
			s.insert(i);
			s.insert(n/i);
		}
	}

    for(auto it : s)
    	cout << it - 1 << " ";
    cout << endl;

}