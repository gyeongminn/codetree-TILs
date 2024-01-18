#include <iostream>
#include <stack>
using namespace std;

int main() {
    int n;
    cin >> n;

    stack<int> s;
    for (int t = n; t > 0; t /= 2) {
        s.push(t % 2);
    }
    
    if (s.empty()) cout << '0';

    while(!s.empty()) {
        cout << s.top();
        s.pop();
    }

    return 0;
}