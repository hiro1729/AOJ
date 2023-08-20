#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int mn = 1000000, mx = -1000000;
    long long s = 0;
    for (int i: a) {
        mn = min(mn, i);
        mx = max(mx, i);
        s += i;
    }
    cout << mn << ' ' << mx << ' ' << s << '\n';
}