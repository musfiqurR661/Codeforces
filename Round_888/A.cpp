//***************************Bismillahhir Rahmanir Rahim********************//
//****************************Md Musfiqur Rahman****************************//
//****************************musfiqurm661*********************************//
//***************************try to make my next step clear***************//
#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    int test_cases;
    cin >> test_cases;

    while (test_cases--) {
        int n, m, k, H;
        cin >> n >> m >> k >> H;

        int h_count = 0;
        for (int i = 0; i < n; ++i) {
            int height;
            cin >> height;
            int diff_chk = abs(H - height);

            if (diff_chk % k == 0 && diff_chk <= (m - 1) * k && diff_chk != 0) {
                h_count++;
            }
        }
        cout << h_count << endl;
    }

    return 0;
}
