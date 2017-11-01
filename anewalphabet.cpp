#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

/*
What's the Frequency, Kenneth?
\/\/[-]@'][''$ ']['[-]3 #|Z3(,)|_|3[]\[](`/, |<3[]\[][]\[]3']['[-]?
*/

// global
string in;
unordered_map<char, string> dict;

void alpha_xform (int index) {
	if((int(in[index])>=97) && int(in[index])<=122)
		cout << dict[in[index]];
	else
		cout << in[index];
}

void build_dict() {
	dict['a'] = '@';
	dict['b'] = '8';
	dict['c'] = '(';
	dict['d'] = "|)";
	dict['e'] = '3';
	
	dict['f'] = '#';
	dict['g'] = '6';
	dict['h'] = "[-]";
	dict['i'] = '|';
	dict['j'] = "_|";
	
	
	dict['k'] = "|<";
	dict['l'] = '1';
	dict['m'] = "[]\\/[]";
	dict['n'] = "[]\\[]";
	dict['o'] = "0";
		
	dict['p'] = "|D";
	dict['q'] = "(,)";
	dict['r'] = "|Z";
	dict['s'] = '$';
	dict['t'] = "']['";

	dict['u'] = "|_|";
	dict['v'] = "\\/";
	dict['w'] = "\\/\\/";
	dict['x'] = "}{";
	dict['y'] = "`/";

	dict['z'] = "2";
}


int main(){
	
	int len;

	build_dict();

//	freopen("test_input.txt", "r", stdin);
	getline(cin, in);
	transform( in.begin(), in.end(), in.begin(), ptr_fun <int, int> ( tolower ) );	// all cin will be transformed to lowercase

	for(int i=0; i<in.size(); i++)
		alpha_xform(i);
	cout << endl;
}