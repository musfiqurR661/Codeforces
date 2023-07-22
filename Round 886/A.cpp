

//***************************Bismillahhir Rahmanir Rahim********************//
//****************************Md Musfiqur Rahman****************************//
//****************************musfiqurm661*********************************//
//***************************try to make my next step clear***************//
#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int num_test_cases;
    cin >> num_test_cases;

    while (num_test_cases--)
    {
        int values[3];
        for (int i = 0; i < 3; i++)
            cin >> values[i];

        sort(values, values + 3);

    

        int x = values[1];
        int y = values[2];
        if (x + y >= 10)
            cout << "YES" << endl;
        else
        {
            cout << "NO" << endl;
        }
    }
}
