#include <iostream>

#define uint int
using namespace std;
#define dev(a,b) ((a%b) == 0) ? a/b : (a/b + 1) 

int main()
{
	uint t, hd, ad, hk, ak, b, d, orig_hd, moves;
	cin >> t;

	for (uint i = 0; i < t; i++) {
		/* Input */
		cin >> hd >> ad >> hk >> ak >> b >> d;
		moves = 0;
		orig_hd = hd, moves;

		while (1) {
			/* Buff */
			/* If you attacker can take you down in x moves,
			 * and if you can increase your attack and defeat him x,
			 * do it.  */
			if (b && (dev(hk, ad + b) <= dev(hd,ak))) {
				ad += b;
			/* Sufficient Health not available */
			} else if ((hd <= ak) && ((hk - ad) > 0)) {
				/* Debuff */
				if (d && d >= ak)
					ak = 0;
				/* Cure */
				else
					hd = orig_hd;
			/* Attack */
			} else
				hk -= ad;
			moves++;
			hd -= ak;
			if (hk <= 0)
				break;
		}

		/* Output */
		cout << "Case #" << i + 1 << ":" << moves << endl;
	}

	return 0;
}
