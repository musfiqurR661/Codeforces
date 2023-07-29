//***************************Bismillahhir Rahmanir Rahim********************//
//****************************Md Musfiqur Rahman****************************//
//****************************musfiqurm661*********************************//
//***************************try to make my next step clear***************//
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll test_case;
    cin >> test_case;

    while (test_case--) {
        ll n;
        cin >> n;

        ll currentCount = 0;
        ll maxCount = 0;
        ll i = 1;

        while (i <= 103) {
            if (n % i == 0) {
                currentCount++;
            } else {
                if (currentCount > maxCount)
                    maxCount = currentCount;
                currentCount = 0;
            }
            i++;
        }

        if (currentCount > maxCount)
            maxCount = currentCount;

        cout << maxCount << endl;
    }

    return 0;
}
