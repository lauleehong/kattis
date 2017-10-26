#include <bits/stdc++.h>
using namespace std;

/*
3
Alice bacon eggs spam
Sue pancakes sausage ham
David eggs spam
1
Bill diet-coke
0
*/

int main(){

	int num_customers;
	string food, customer_name, food_tab;
	set<pair<string,string> > food_order;

	//freopen("test_input.txt", "r", stdin);

	while((cin >> num_customers)&&(num_customers!= 0)){				// new day
		food_order.clear();

		for (int i=0; i<num_customers; i++) {						// for each customer
			cin >> customer_name;									// grab the customer's name
			getline(cin, food_tab);									// grab his/her order tab
			//cout << customer_name << food_tab << endl;
			
			stringstream strstr(food_tab);							// split the giant string into substrings
			
			for (int i=0; strstr>>food; ++i) {						// unfold the substring "words"
				food_order.insert(pair<string,string>(food, customer_name));		// [FOOD_ITEM]->NAME
			}
		}

		// print all keys with their correspinding values in multimaps food_order
		
		for(auto i = food_order.begin(); i != food_order.end(); ) {
        	cout << i->first;	//find
			auto d = i;
        	for(; d != food_order.end(), d->first == i->first; d++)       // print all values with the same "food name"
            	std::cout << " " << d->second;
   		 	cout << endl;
   		 	
   		 	i = d;	//set to the next highest unprinted pair
   		 }
		
		cout << endl;

	}
}
