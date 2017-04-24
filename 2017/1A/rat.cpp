#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>

#define uint int
using namespace std;

uint arr[50][50];
uint cal[50][50];
uint req[50];

int main()
{
	uint t, n, p;

	/* Input */
	cin >> t >> n >> p;
	for (uint i = 0; i < n; i++)
		cin >> req[i];

	for (uint i = 0; i < n; i++) {
		for (uint j = 0; j < p; j++) {
			cin >> arr[i][j];
			cal[i][j] = arr[i][j]/req[i];
		}
	}

	for (uint k = 0; k < t; k++) {
		for (uint i = 0; i < r; i++) {
		}
	}

		/* Output */
		cout << "Case #" << k + 1 << ":" << endl;

		for (uint i = 0; i < r; i++) {
			for (uint j = 0; j < c; j++)
				cout << arr[i][j];
			cout << endl;
		}

	}
	return 0;
}
