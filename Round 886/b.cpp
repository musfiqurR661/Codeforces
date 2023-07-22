
//***************************Bismillahhir Rahmanir Rahim********************//
//****************************Md Musfiqur Rahman****************************//
//****************************musfiqurm661*********************************//
//***************************try to make my next step clear***************//
#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int test_cases;
    cin >> test_cases;

    while (test_cases--)
    {
        int num_entries;
        cin >> num_entries;

        int max_q = 0, max_q_entry = 1; // Initialize max_q_entry with 1
        for (int i = 1; i <= num_entries; i++)
        {
            int value, q;
            cin >> value >> q;

            if (value <= 10 && q > max_q)
            {
                max_q = q;
                max_q_entry = i;
            }
        }
        cout << max_q_entry << endl;
    }
    return 0;
}
