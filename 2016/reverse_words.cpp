#include<iostream>
#include<string>
#include<stdio.h>
#include<stack>
#include <sstream>

using namespace std;

int main()
{
	freopen("rev.in", "rt", stdin);
	freopen("rev.out", "wt", stdout);
	string s;
	stack<string> st;
	int n, i;
	cin >> n;
	for (i = 0; i < n; i++) {
		getline(cin, s);
		istringstream iss(s);
		string word;
		while(iss >> word)
			st.push(word);
		while(!st.empty()) {
                	cout << st.top() << " "; 
                	st.pop();
        	}
		cout << endl;
	}
	return 0;
}
