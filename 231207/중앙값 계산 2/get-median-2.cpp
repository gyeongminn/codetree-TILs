#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> v(n+1);
    for(int i = 1; i <= n; i++) {
        cin >> v[i];
        if (i & 1) {
            cout << v[(i + 1) / 2] << ' ';
        }
    }
    return 0;
}