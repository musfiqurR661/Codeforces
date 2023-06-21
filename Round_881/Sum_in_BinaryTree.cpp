

#include <bits/stdc++.h>

using namespace std;

#define ll long long

signed main()
{
    int t_cases;
    cin >> t_cases;

    while (t_cases--)
    {
        ll n;
        cin >> n;

        ll sum = 0;
        ll i = n;
        while (i > 0)
        {
            sum += i;
            i /= 2;
        }

        cout << sum << "\n";
    }

    return 0;
}
