#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    int res = 0;
    for (char c : s) {
        res *= 2;
        if (c == '1') res++;
    }

    cout << res;

    return 0;
}