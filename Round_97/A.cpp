#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int giftFrom[n + 1];
    for (int i = 1; i <= n; i++) {
        cin >> giftFrom[i];
    }

    for (int i = 1; i <= n; i++) {
        int firstGiftGiver = giftFrom[i];                     
        int secondGiftGiver = giftFrom[firstGiftGiver];      
        int thirdGiftGiver = giftFrom[secondGiftGiver];       

        cout << thirdGiftGiver << " ";                       
    }

    return 0;
}
