#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);
	int n;
    cin >> n;

    set<tuple<int,int,int>> s;
    for(int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        s.insert(make_tuple(a, -b, i + 1));
    }

    for (auto item: s) {
         cout << get<0>(item) << ' ' << -get<1>(item) << ' ' << get<2>(item) << '\n';
    }
    return 0;
}