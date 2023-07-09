//***************************Bismillahhir Rahmanir Rahim********************//
//****************************Md Musfiqur Rahman****************************//
//****************************musfiqurm661*********************************//
//***************************try to make my next step clear***************//

#include <iostream>
#include <algorithm>

using namespace std;

void solution()
{
    int n, m, h;
    cin >> n >> m >> h; // participants, the number of problems, and the duration of the competition, respectively.

    int place = 1;
    int solved = 0;
    long long time = 0; // Use long long for time and first variables

    for (int i = 0; i < n; i++)
    {
        int problems[m];
        for (int j = 0; j < m; j++)
        {
            cin >> problems[j];
        }
        sort(problems, problems + m);

        long long first = 0;
        int cnt = 0;
        long long taken = 0;
        for (int j = 0; j < m; j++)
        {
            first += problems[j];
            if (first <= h)
            {
                cnt++;
                taken += first;
            }
            else
            {
                break;
            }
        }

        if (i == 0)
        {
            solved = cnt;
            time = taken;
        }
        else
        {
            if (cnt > solved || (cnt == solved && time > taken))
            {
                place++;
            }
        }
    }

    cout << place << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        solution();
    }

    return 0;
}
