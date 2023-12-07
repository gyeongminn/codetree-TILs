#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> v;
    for(int i = 1; i <= n; i++) {
        int a;
        cin >> a;
        v.push_back(a);
        if (i & 1) {
            nth_element(v.begin(), v.begin() + i / 2 , v.end());
            cout << v[i / 2] << ' ';
        }
    }
    return 0;
}