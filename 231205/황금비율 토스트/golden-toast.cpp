#include <iostream>
#include <list>
#include <string>
using namespace std;

int n, m;
string s;
list<char> bread;
list<char>::iterator it;

void solve() {
    char opt; cin >> opt;
    if (opt == 'L') {
        if (it != bread.begin()) it--;
    } else if (opt == 'R') {
        if (it != bread.end()) it++;
    } else if (opt == 'D') {
        if (it != bread.end()) it = bread.erase(it);
    } else if (opt == 'P') {
        char c; cin >> c;
        it = bread.insert(it, c);
        it++;
    }
}

int main() {
    cin >> n >> m;
    cin >> s;
    for (char c : s) bread.push_back(c);
    it = bread.end();

    while (m--) solve();

    for (it = bread.begin(); it != bread.end(); it++) {
        cout << *it;
    }

    return 0;
}