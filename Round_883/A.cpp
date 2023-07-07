//***************************Bismillahhir Rahmanir Rahim********************//
//****************************Md Musfiqur Rahman****************************//
//****************************musfiqurm661*********************************//
//***************************try to make my next step clear***************//


#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int count = 0;
        int heights[n];
        int lengths[n];

        for (int i = 0; i < n; i++) {
            cin >> heights[i] >> lengths[i];
        }

        for (int i = 0; i < n; i++) {
            if (heights[i] > lengths[i]) {
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}
