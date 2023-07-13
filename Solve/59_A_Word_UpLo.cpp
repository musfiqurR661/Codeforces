//***************************Bismillahhir Rahmanir Rahim********************//
//****************************Md Musfiqur Rahman****************************//
//****************************musfiqurm661*********************************//
//***************************try to make my next step clear***************//



#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;

    int upcount = 0, lowCount = 0, i;

    for (i = 0; i < str.length(); i++)
    {
        if (isupper(str[i]))
        {
            upcount++;
        }
        else if (islower(str[i]))
        {
            lowCount++;
        }
    }
    if (upcount > lowCount)
    {
        for (i = 0; i <= str.length(); i++)
        {
            if (str[i] >= 97 && str[i] <= 122)
            {
                str[i] = 65 + str[i] - 97;
            }
        }
    }
    else
    {
        for (i = 0; i <= str.length(); i++)
        {
            if (str[i] >= 65 && str[i] <= 90)
            {
                str[i] = 97 + str[i] - 65;
            }
        }
    }
    cout << str;

    return 0;
}