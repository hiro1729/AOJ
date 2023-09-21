#include <iostream>
using namespace std;

int main() {
	int m, f, r;
	while (cin >> m >> f >> r) {
		if (m == -1 && f == -1 && r == -1) break;
		if (m == -1 || f == -1 || m + f < 30) cout << "F\n";
		else if (m + f < 50 && r < 50) cout << "D\n";
		else if (m + f < 65) cout << "C\n";
		else if (m + f < 80) cout << "B\n";
		else cout << "A\n";
	}
}