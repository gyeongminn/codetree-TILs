#include <iostream>
#include <stack>
using namespace std;

int main() {
    int N, B;
    cin >> N >> B;

    stack<int> s;
    for (int t = N; t > 0; t /= B) {
        s.push(t % B);
    }

    if (s.empty()) cout << '0';

    while (!s.empty()) {
        cout << s.top();
        s.pop();
    }
    
    return 0;
}