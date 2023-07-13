//***************************Bismillahhir Rahmanir Rahim********************//
//****************************Md Musfiqur Rahman****************************//
//****************************musfiqurm661*********************************//
//***************************try to make my next step clear***************//

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int num, n;
    cin >> num >> n;

    for (int i = 1; i <= n; i++)

    {
        int lastDigit = num % 10;
        if (lastDigit == 0)
        {
            num = num / 10;
        }

        else
        {
            num = num - 1;
        }
    }

    cout << num;

    return 0;
}