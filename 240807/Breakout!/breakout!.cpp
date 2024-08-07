#include <bits/stdc++.h>
using namespace std;

int N;
vector<int> v;

void input() {
    cin >> N;
    v.resize(N);
    for (int &i : v) cin >> i;
}

void solve() {
    int length = 0;
    int max_num = 0;

    for (int i = 0; i < N; ++i) {
        if (v[i] > i) {
            cout << -1;
            return;
        }

        max_num = max(max_num, v[i]);
        if (v[i] == -1) {
            length++;
            continue;
        }
    }

    cout << max_num + 1 << ' ' << length;
}

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);
    input();
    solve();
    return 0;
}