#include <bits/stdc++.h>
using namespace std;

int main() {
	string s, p;
	cin >> s >> p;
	s += s;
	int n = p.size(), m = s.size();
	for (int i = 0; i <= m - n; i++) {
		if (s.substr(i, n) == p) {
			cout << "Yes\n";
			return 0;
		}
	}
	cout << "No\n";
}