#include <iostream>
using namespace std;

int main() {
	int n, m;
	while (cin >> n >> m) {
		if (n == 0 && m == 0) break;
		for (int i = 0; i < n; i++) {
			cout << '#';
			char c = (i == 0 || i == n - 1 ? '#' : '.');
			for (int j = 0; j < m - 2; j++) cout << c;
			cout << "#\n";
		}
		cout << '\n';
	}
}