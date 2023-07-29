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
        cout << giftFrom[giftFrom[giftFrom[i]]] << " ";
    }

    return 0;
}
