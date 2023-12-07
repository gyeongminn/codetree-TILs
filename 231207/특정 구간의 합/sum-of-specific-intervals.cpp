#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (auto& i : v) cin >> i;
    while (m--) {
        int a, b;
        cin >> a >> b;
        int sum = 0;
        for (int i = a - 1; i <= b - 1; i++) {
            sum += v[i];
        }
        cout << sum << '\n';
    }
    return 0;
}