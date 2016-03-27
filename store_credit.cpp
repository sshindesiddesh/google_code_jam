#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	freopen("store_credit.in", "rt", stdin);
	freopen("store_credit.out", "wt", stdout);
	short int price[2000] = {0};
	short int item[2000];
	short int n, cost, no_item;
	int i, j, k;

	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> cost >> no_item;
		for (j = 0; j < no_item; j++) {
			cin >> price[j];
			if (item[cost - price[j]] != 0) {
				cout << "Case #" << n << " "<< j + 1 << " " <<
					item[cost - price[j]] + 1 << "\n";
				break;
			} else
				item[price[j]] = j;
		}
		for (k = 0; k < 2000; k++) {
			price[k] = 0;
			item[k] = 0;
		}
	}
	return 0;
} 	
