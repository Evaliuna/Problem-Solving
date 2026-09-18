#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int m, d;
    cin >> m >> d;

    vector<char> c(m);
    for (int i = 0; i < m; i++)
    {
        cin >> c[i];
    }

    int g_on = -1;

    // find the first G
    for (int i = 0; i < m; i++)
    {
        if (c[i] == 'G')
        {
            g_on = i;
            break;
        }
    }

    if (g_on == -1)
    {
        cout << m << "\n";
        return 0;
    }

    int count = 0;

    // start after the first G and check every d positions
    for (int i = g_on + d; i < m; i += d)
    {
        if (c[i] != 'G')
        {
            count++;
        }
    }

    cout << count << "\n";
    return 0;
}