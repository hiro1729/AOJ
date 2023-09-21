#include <bits/stdc++.h>
using namespace std;

int main() {
	map<char, int> m;
	string s;
	while (cin >> s) {
		for (char i: s) {
			m[tolower(i)]++;
		}
	}
	for (char i = 'a'; i <= 'z'; i++) {
		cout << i << " : " << m[i] << '\n';
	}
}