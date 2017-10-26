#include <bits/stdc++.h>
using namespace std;

/*
2

3 3
1 2
2 3
1 3

5 4
2 1
2 3
4 3
4 5
*/

int main() {
	int num_tc, n, m, a, b;
//	freopen("test_input.txt", "r", stdin);
	cin >> num_tc;

	while (num_tc--){
		cin >> n >> m;
		while (m--) {
			cin >> a >> b;
		}
		cout << (n-1) << endl;
	}

}