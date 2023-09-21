#include <bits/stdc++.h>
using namespace std;

int main() {
	string x;
	while (cin >> x) {
		if (x == "0") break;
		int ans = 0;
		for (char i: x) ans += i - '0';
		cout << ans << '\n';
	}
}