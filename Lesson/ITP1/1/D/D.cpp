#include <iostream>
using namespace std;

int main() {
    int s;
    cin >> s;
    cout << s / 3600 << ':' << (s / 60) % 60 << ':' << s % 60 << '\n';
}