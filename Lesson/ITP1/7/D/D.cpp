#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int n, m, l;
	cin >> n >> m >> l;
	vector<vector<int>> a(n, vector<int>(m)), b(m, vector<int>(l));
	vector<vector<ll>> c(n, vector<ll>(l));
	for (int i = 0; i < n; i++) for (int j = 0; j < m; j++) cin >> a[i][j];
	for (int i = 0; i < m; i++) for (int j = 0; j < l; j++) cin >> b[i][j];
	for (int i = 0; i < n; i++) for (int j = 0; j < l; j++) {
		ll s = 0;
		for (int k = 0; k < m; k++) s += a[i][k] * b[k][j];
		c[i][j] = s;
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < l - 1; j++) {
			cout << c[i][j] << ' ';
		}
		cout << c[i][l - 1] << '\n';
	}
}