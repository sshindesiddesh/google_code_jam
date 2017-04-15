#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>

#define uint int
using namespace std;
char arr[50][50];

uint gc = 0;
uint gr = 0;

void fill_col(uint c, uint x1, uint x2, char alpha)
{
	for (uint i = x1; i <= x2; i++)
		arr[i][c] = alpha;
}

void fill_row(uint r, uint y1, uint y2, char alpha)
{
	for (uint i = y1; i <= y2; i++)
		arr[r][i] = alpha;
}

uint get_next_alpha_c(int c, int r)
{
	for (uint i = gc; i < r; i++)
		if (arr[i][c] !=  '?') {
			gc = i + 1;
			return i;
		}
	return r;
}

uint get_next_alpha_r(int r, int c)
{
	for (uint i = gr; i < c; i++)
		if (arr[r][i] !=  '?') {
			gr = i + 1;
			return i;
		}
	return c;
}

int main()
{
	uint t,r,c,l = 0, l_prev = 0;
	cin >> t;
	for (uint k = 0; k < t; k++) {
		cin >> r >> c;
		for (uint i = 0; i < r; i++) {
			for (uint j = 0; j < c; j++) {
				cin >> arr[i][j];
			}
		}

		/* Row */
		for (uint j = 0; j < r; j++) {
			l = l_prev = -1, gr = 0;
			while (l_prev < c) {
				l = get_next_alpha_r(j, c);
				if (l_prev ==  -1 && l > 0) {
					if (l != c)
						fill_row(j, 0, l - 1, arr[j][l]);
				} else
					fill_row(j, l_prev + 1, l - 1, arr[j][l_prev]);
				l_prev = l;
			}
		}

		/* Column */
		for (uint j = 0; j < c; j++) {
			l = l_prev = -1, gc = 0;
			while (l_prev < r) {
				l = get_next_alpha_c(j, r);
				if (l_prev ==  -1 && l > 0) {
					if (l != r)
						fill_col(j, 0, l - 1, arr[l][j]);
				} else
					fill_col(j, l_prev + 1, l - 1, arr[l_prev][j]);
				l_prev = l;
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
