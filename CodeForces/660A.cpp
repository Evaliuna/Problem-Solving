#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> ans;
    int k = 0;

    ans.push_back(a[0]);

    for (int i = 0; i < n - 1; i++) {
        if (gcd(a[i], a[i + 1]) > 1) {
            ans.push_back(1);
            k++;
        }

        ans.push_back(a[i + 1]);
    }

    cout << k << '\n';

    for (int x : ans) {
        cout << x << ' ';
    }

    cout << '\n';

    return 0;
}