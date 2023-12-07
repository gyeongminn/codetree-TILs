#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto& i : v) cin >> i;

    for (int i = 0; i < v.size() - 1; i++) {
        for (int j = 0; j < v.size(); j++) {
            if (v[j] > v[j + 1]) {
                int tmp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = tmp;
            }
        }
    }

    for (auto i : v) cout << i << ' ';

    return 0;
}