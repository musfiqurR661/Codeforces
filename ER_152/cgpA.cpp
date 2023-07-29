#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int b, c, h;
        cin >> b >> c >> h;

        // Scenario 1: Using all the available bread, cheese, and ham
        int max_layers_1 = min(b / 2, min(c, h)) + min((b - 1) / 2, min(c, h));

        // Scenario 2: Using all the available bread and either cheese or ham (whichever is greater)
        int max_layers_2 = min(b / 2, max(c, h));

        int max_layers = max(max_layers_1, max_layers_2);
        cout << max_layers << endl;
    }

    return 0;
}
