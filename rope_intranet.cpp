#include<iostream>
#include<stdio.h>
#include<vector>

using namespace std;

int intrsct(pair<int, int> p1, pair<int, int> p2)
{
	if (p1.first > p2.first) {
		if (p1.second < p2.second) {
			return 1;
		}
	} else if (p1.first < p2.first) {
		if (p1.second > p2.second) {
			return 1;
		}
	}
	return 0;
}

int main()
{
	freopen("rope.in", "rt", stdin);
	freopen("rope.out", "wt", stdout);
	int t, n;
	int i, j, k, cnt = 0;
	pair <int, int> p;
	vector< pair<int, int> >vec; 
	cin >> t;
	for (i = 0; i < t; i++) {
		vec.clear();
		cnt = 0;
		cin >> n;
		for (j = 0; j < n; j++) {
			cin >> p.first >> p.second;
			vec.push_back(p);
			for (k = 0; k < j; k++) {
				if (intrsct(vec[k], vec[j]))
					cnt++;
			}
		}
		cout << "Case #" << i << ": " << cnt << endl;
	}
	
return 0;
}
