#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);
    int m1, m2, d1, d2;
    cin >> m1 >> d1 >> m2 >> d2;
    string s;
    cin >> s;
    string days[7] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
    int day;
    for (int i = 0; i < 7; i++) {
        if (days[i] == s) day = i;
    }
    int sum = d2 - d1;
    int month[12] = {30, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    for (int i = m1; i < m2; ++i) {
        sum += month[i - 1];
    }
    cout << sum / 7 + (sum % 7 >= day) ? 1 : 0;
    return 0;
}