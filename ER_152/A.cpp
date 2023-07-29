//***************************Bismillahhir Rahmanir Rahim********************//
//****************************Md Musfiqur Rahman****************************//
//****************************musfiqurm661*********************************//
//***************************try to make my next step clear***************//

#include <iostream>
using namespace std;

int calculateResult(int b, int c, int h)
{
    // ternary condition
    return (b > c + h) ? (2 * (c + h) + 1) : (2 * b - 1);
}

int main()
{
    int test_case;

    cin >> test_case;

    while (test_case--)
    {
        int bread, cheese, ham;

        cin >> bread >> cheese >> ham;

        int result = calculateResult(bread, cheese, ham);
        cout  << result << endl;
    }

    return 0;
}
