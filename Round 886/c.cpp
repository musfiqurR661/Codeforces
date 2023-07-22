//***************************Bismillahhir Rahmanir Rahim********************//
//****************************Md Musfiqur Rahman****************************//
//****************************musfiqurm661*********************************//
//***************************try to make my next step clear***************//
#include <iostream>
#define ll long long
using namespace std;

int main()
{
    int num_test_cases;
    cin >> num_test_cases;

    while (num_test_cases--)
    {
        char cell;
        string result;
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                cin >> cell;
                if (cell != '.')
                    result += cell;
            }
        }
        cout << result << endl;
    }
}

