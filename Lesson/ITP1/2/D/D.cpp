#include <bits/stdc++.h>
using namespace std;

int main() {
    int w, h, x, y, r;
    cin >> w >> h >> x >> y >> r;
    cout << (0 <= x - r && x + r <= w && 0 <= y - r && y + r <= h ? "Yes\n" : "No\n");
}