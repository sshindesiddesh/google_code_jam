#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <map>
#include <algorithm>

using namespace std;

int main()
{
	int t, m, n;
	int i, j, k;
	string s;
	string st, stp;
	vector <string> vec;
	int p, q;
	int size = 0;	
	freopen("file.in", "rt", stdin);
	freopen("file.out", "wt", stdout);
	
	cin >> t;
	for (i = 0; i < t; i++) {
		s.clear();
		vec.clear();
		cin >> m >> n;
		for (j = 0; j < m; j++) {
			getline(cin, s);
			if (s.empty()) {
				j--;
				continue;
			}
			istringstream iss(s);
			st.clear();
			stp.clear();
			while (getline(iss, st, '/')) {
				if (st.empty())
					continue;
				stp  = stp + '/' + st;
				if (find(vec.begin(), vec.end(), stp) == vec.end()) {
					vec.push_back(stp);
				}
			}
        	}
		size = vec.size();
		for (j = 0; j < n; j++) {
			getline(cin, s);
			if (s.empty()) {
				j--;
				continue;
			}
			istringstream iss(s);
			st.clear();
			stp.clear();
			while (getline(iss, st, '/')) {
				if (st.empty())
					continue;
				stp  = stp + '/' + st;
				if (find(vec.begin(), vec.end(), stp) == vec.end()) {
					vec.push_back(stp);
				}
			}
		}
		cout << "Case#" << i + 1 << ": " << (vec.size() - size) << endl;
	}
return 0;
}
