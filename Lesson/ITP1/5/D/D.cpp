#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		bool ok = false;
		if (i % 3 == 0) ok = true;
		int x = i;
		while (x) {
			if (x % 10 == 3) ok = true;
			x /= 10;
		}
		if (ok) cout << ' ' << i;
	}
	cout << '\n';
}