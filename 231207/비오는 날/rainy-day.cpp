#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    cin.ignore();
    set<string> sets;
    for (int i = 0; i < n; i++) {
        string s; getline(cin, s);
        sets.insert(s);
    }
    for (auto s : sets) {
        if (s[s.length() - 2] == 'i'){
            cout << s << endl;
            break;
        }
    }
    return 0;
}