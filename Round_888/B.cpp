//***************************Bismillahhir Rahmanir Rahim********************//
//****************************Md Musfiqur Rahman****************************//
//****************************musfiqurm661*********************************//
//***************************try to make my next step clear***************//
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    ll num_elements, m, i, j, k;
    cin >> num_elements;
    ll v[num_elements];
    for (i = 0; i < num_elements; i++)
        cin >> v[i];
    ll odd[num_elements], even[num_elements];
    ll new_arr[num_elements];
    ll odd_idx = 0, even_idx = 0;
    for (i = 0; i < num_elements; i++) {
        if (v[i] & 1)
            odd[odd_idx++] = v[i];
        else
            even[even_idx++] = v[i];
    }
    sort(even, even + even_idx);
    sort(odd, odd + odd_idx);
    ll n_odd_count = 0, n_even_count = 0;
    for (i = 0; i < num_elements; i++) {
        if (v[i] & 1) {
            new_arr[i] = odd[n_odd_count++];
        } else {
            new_arr[i] = even[n_even_count++];
        }
    }
    int is_sorted = 1;
    for (i = 1; i < num_elements; i++) {
        if (new_arr[i] < new_arr[i - 1]) {
            is_sorted = 0;
            break;
        }
    }
    if (is_sorted)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main() {
    int test_cases;
    cin >> test_cases;
    while (test_cases--) {
        solve();
    }
    return 0;
}
