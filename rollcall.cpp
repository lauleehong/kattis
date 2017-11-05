#include <bits/stdc++.h>
using namespace std;

/*
Will Smith
Agent Smith
Peter Pan
Micky Mouse
Minnie Mouse
Peter Gunn
*/

typedef pair<string, string> ss;

multiset<string> ms;        // LAST_NAME counter
set<ss> s;      // (last_name, first_name)


int main() {
    
    string first_name, last_name;
    
//    freopen("test_input.txt", "r", stdin);
    
    while(cin >> first_name >> last_name) {
        
        s.insert(make_pair(last_name, first_name));
        ms.insert(first_name);
        
    }
    
    for(set<ss> :: const_iterator it = s.begin(); it!=s.end(); ++it) {
        cout << it->second;
        
        if(ms.count(it->second)>1)
                    cout << " "<<it->first;
            
        cout << endl;
    }   
}