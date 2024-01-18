#include <iostream>
#include <stack>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    string s;
    cin >> s;

    int decimal = 0;
    for (auto c : s) {
        decimal *= a;
        decimal += int(c - '0');
    }

    stack<int> st;
    for (int t = decimal; t > 0; t /= b) {
        st.push(t % b);
    }

    if (st.empty()) cout << '0';

    while(!st.empty()) {
        cout << st.top();
        st.pop();
    }

    return 0;
}