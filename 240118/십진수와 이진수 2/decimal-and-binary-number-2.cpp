#include <iostream>
#include <stack>
using namespace std;

int main() {
    string s;
    cin >> s;

    int decimal = 0;
    for (auto c : s) {
        decimal *= 2;
        if (c == '1') decimal++;
    }
    
    decimal *= 17;

    stack<int> st;
    for (int t = decimal; t > 0; t /= 2) {
        st.push(t % 2);
    }

    if (st.empty()) cout << '0';
    while(!st.empty()) {
        cout << st.top();
        st.pop();
    }

    return 0;
}