#include <iostream>

int main() {
	size_t vp, vn, p1, n1, k1, m, k2, p2, n2;
	size_t inp, tp, tn, tk;

	std::cin >> k1 >> m >> k2 >> p2 >> n2;

	vp = 0;
	vn = 0;
	p1 = -1;
	n1 = -1;

	for (size_t i = 1; i <= 1000; ++i) {
		inp = m * i;
		tp = ((k2 - 1) / inp) + 1;
		tk = k2 - (tp - 1) * inp;
		tn = ((tk - 1) / i) + 1;

		if ((tp == p2) && (tn == n2)) {
			tp = ((k1 - 1) / inp) + 1;
			tk = k1 - (tp - 1) * inp;
			tn = ((tk - 1) / i) + 1;

			if (n1 == -1) {
				n1 = tn;
				vn = 1;
			}
			if (p1 == -1) {
				p1 = tp;
				vp = 1;
			}

			if ((vp > 0) && (tp != p1)) ++vp;
			if ((vn > 0) && (tn != n1)) ++vn;
		}
	}

	if (vp == 0) std::cout << "-1 ";
	else if (vp > 1)  std::cout << "0 ";
	else if (vp == 1) std::cout << p1 << ' ';

	if (vn == 0) std::cout << "-1";
	else if (vn > 1) std::cout << '0';
	else if (vn == 1) std::cout << n1;

	return 0;
}