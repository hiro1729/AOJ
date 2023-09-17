#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, b, f, r, v;
	cin >> n;
	vector<vector<vector<int>>> a(4, vector<vector<int>>(3, vector<int>(10)));
	while (cin >> b >> f >> r >> v) {
		b--; f--; r--;
		a[b][f][r] += v;
	}
	for (int i = 0; i < 4; i++) {
		if (i) cout << "####################\n";
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 10; k++) cout << ' ' << a[i][j][k];
			cout << '\n';
		}
	}
}