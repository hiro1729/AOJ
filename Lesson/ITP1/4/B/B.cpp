#include <bits/stdc++.h>
using namespace std;

int main() {
    long double r;
    cin >> r;
    // numbers::piはAOJでは使えない
    cout << fixed << setprecision(9) << r * r * M_PI << ' ' << 2 * r * M_PI << '\n';
}