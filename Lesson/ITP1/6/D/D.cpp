#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	vector<vector<int>> a(n, vector<int>(m));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) cin >> a[i][j];
	}
	vector<int> b(m);
	for (int i = 0; i < m; i++) cin >> b[i];
	for (int i = 0; i < n; i++) {
		int s = 0;
		for (int j = 0; j < m; j++) s += a[i][j] * b[j];
		cout << s << '\n';
	}
}