#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <stdio.h>

#define long long int uint;

using namespace std;

int main()
{
	uint t, d, n, k, s;
	vector<double> time;
	//cout << setprecision(6);
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> d >> n;

		for (int j = 0; j < n; j++) {
			cin >> k >> s;
			double tm = ((double)(d-k)/(double)s);
			time.push_back(tm);
		}

		double max = *max_element(time.begin(), time.end());
		max = ((double)d)/max;
		cout << "Case #" << i + 1 << ": ";
		printf("%.6lf", max);
		cout << endl;
		time.clear();
	}
	return 0;
}
