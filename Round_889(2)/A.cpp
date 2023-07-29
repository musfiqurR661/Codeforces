//***************************Bismillahhir Rahmanir Rahim********************//
//****************************Md Musfiqur Rahman****************************//
//****************************musfiqurm661*********************************//
//***************************try to make my next step clear***************//

#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    int test_cases;
    cin >> test_cases;

    while (test_cases--) {
        int n;
        cin >> n;
        int chair_positions[n]; //  chair positions

        for (int i = 0; i < n; i++) {
            cin >> chair_positions[i]; 
        }

        int happiness_count = 0;

        for (int i = 1; i <= n; i++) {
            if (chair_positions[i - 1] == i) 
                happiness_count++;
        }

        cout << (happiness_count + 1) / 2 << endl;
    }

    return 0;
}


