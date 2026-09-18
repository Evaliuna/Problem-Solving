#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int num;
    int even = 0;
    int odd = 0;

    for (int i = 0; i < 15; i++)
    {
        cin >> num;
        if (num % 2 == 0)
        {
            int par[even] = {num};

            if (even == 4)
            {
                for (int i = 0; i < 5; i++)
                {
                    cout << "par[" << even << "] = " << par[i] << "\n";
                }
                even = -1;
            }
            even++;
        }
        else
        {
            int impar[odd] = {num};

            if (even == 4)
            {
                for (int i = 0; i < 5; i++)
                {
                    cout << "impar[" << even << "] = " << impar[i] << "\n";
                }
                odd = -1;
            }
            odd++;
        }
    }
    return 0;
}