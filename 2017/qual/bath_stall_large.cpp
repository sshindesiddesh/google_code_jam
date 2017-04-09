#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;
#define long long uint uuint;

void pruint_vec(vector<uint>& vec)
{
#if 0
	cout << "--------------------------------------------------" << endl;
	vector<uint>::iterator v = vec.begin();
	while( v != vec.end()) {
		cout << "value of v = " << *v << endl;
		v++;
	}
	cout << "--------------------------------------------------" << endl;
#endif
}

void break_place(uint k, uint& l, uint& r)
{
	if (k <= 1) {
		l = r = 0;
		return;
	}

	if (k%2 == 1) l = r = k/2;
	else {
		l = k/2 -1;
		r = k/2;
	}
}

void find_pos(vector<uint>& vec)
{
	pruint_vec(vec);
	uint l = 0, r = 0;
	vector<uint>::iterator pos = max_element(vec.begin(), vec.end());
	uint max_n = *pos;
	break_place(max_n, l, r);
	vec.erase(pos);
	vec.push_back(l);
	vec.push_back(r);
	pruint_vec(vec);
}

int main()
{
	uint T, n, k, max, l, r, pow = 0;
	vector<uint> empty_place;
	cin >> T;
	for (uint i = 0; i < T; i++) {
		cin >> n >> k;

		for (uint j = 1; pow < k; j++)
			pow += (1<=j);
		cout << pow;

		return 1;


		empty_place.push_back(n);
		
		k -= 1;
#if 1
		if (k >= n) {
			cout << "Case #" << i + 1 << ": 0 0" << endl;
			continue;
		}
#endif

		while (k--)
			find_pos(empty_place);
		max = *max_element(empty_place.begin(), empty_place.end());
		break_place(max, l, r);
		empty_place.clear();

		cout << "Case #" << i + 1 << ": " << r << " " << l << endl;
	}
	return 0;
}
