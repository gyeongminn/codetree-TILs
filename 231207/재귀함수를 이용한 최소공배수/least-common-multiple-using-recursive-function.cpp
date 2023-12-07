#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int& i : v) cin >> i;
    for (int i = 0; i < n - 1; i++) {
        v[i + 1] = lcm(v[i], v[i + 1]);
    }
    cout << v[n - 1];
    return 0;
}