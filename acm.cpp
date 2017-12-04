#include <bits/stdc++.h>
using namespace std;

/*
3 E right
10 A wrong
30 C wrong
50 B wrong
100 A wrong
200 A right
250 C wrong
300 D right
-1
*/

map<string,int> wrong_entries;			// [A, ... , Z] --> counter

int main() {

	int m, total_time=0, correct_counter=0;
	string problem, ans_validity;

//	freopen("test_input.txt", "r", stdin);
	cin >> m;

	while (m!=-1) {
		cin >> problem >> ans_validity;
//		cout << m << " " <<  problem  << " " << ans_validity << endl;;
		
		if (ans_validity != "right") {
			wrong_entries[problem] = wrong_entries[problem]+1;
//			cout << problem << " " << wrong_entries[problem] << endl;
		}
		else {
			correct_counter++;
			total_time = total_time + m + (20*wrong_entries[problem]);
		}

		cin >> m;
	}

	cout << correct_counter << " " << total_time << endl;
}