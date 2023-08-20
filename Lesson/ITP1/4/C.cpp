#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    char op;
    while (cin >> a >> op >> b) {
        if (op == '?') break;
        if (op == '+') cout << a + b << '\n';
        if (op == '-') cout << a - b << '\n';
        if (op == '*') cout << a * b << '\n';
        if (op == '/') cout << a / b << '\n';
    }
}