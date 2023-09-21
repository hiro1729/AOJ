#include <bits/stdc++.h>
using namespace std;

int main() {
	string s; getline(cin, s);
	for (char i: s) {
		if (isupper(i)) cout << (char)tolower(i);
		else if (islower(i)) cout << (char)toupper(i);
		else cout << i;
	}
	cout << '\n';
}