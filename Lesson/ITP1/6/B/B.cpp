#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	map<char, map<int, bool>> m;
	while (n--) {
		char i; int j;
		cin >> i >> j;
		m[i][j] = true;
	}
	for (int i = 1; i <= 13; i++) {
		if (!m['S'][i]) cout << "S " << i << '\n';
	}
	for (int i = 1; i <= 13; i++) {
		if (!m['H'][i]) cout << "H " << i << '\n';
	}
	for (int i = 1; i <= 13; i++) {
		if (!m['C'][i]) cout << "C " << i << '\n';
	}
	for (int i = 1; i <= 13; i++) {
		if (!m['D'][i]) cout << "D " << i << '\n';
	}
}