#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) cin >> a[i];
	reverse(a.begin(), a.end());
	for (int i = 0; i < n - 1; i++) cout << a[i] << ' ';
	cout << a[n - 1] << '\n';
}