#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int ans = 0;
    for (; a <= b; a++) {
        if (c % a == 0) {
            ans++;
        }
    }
    cout << ans << '\n';
}