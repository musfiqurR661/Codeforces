#include <bits/stdc++.h>
using namespace std;

#define ll long long

int Cost_calculate(ll a[], int n)
{
    sort(a, a + n);
    int count = 0;

int half = n / 2;
for (int i = 0; i < half; i++) {
    int diff = a[i] - a[n - i - 1];
    if (diff < 0) {
        count -= diff;  
    } else {
        count += diff;
    }
}


    return count;
} 

int main()
{
    int t_case;
    cin >> t_case;

    while (t_case--)
    {
        ll n;
        cin >> n;

        ll a[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        int count = Cost_calculate(a, n);

        cout << count << endl;
    }

    return 0;
}
