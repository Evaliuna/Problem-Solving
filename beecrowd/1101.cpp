#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int m, n;

    while (cin >> m >> n && m > 0 && n > 0) {
        int a = min(m, n);
        int b = max(m, n);
        int sum = 0;
        for (int i = a; i <= b; i++) {
            cout << i << " ";
            sum += i;
        }
        cout << "Sum=" << sum << '\n';
    }

    return 0;
}