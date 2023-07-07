#include <iostream>
using namespace std;

char searchWinner(char a1, char a2, char a3) {
    if (a1 != '.' && a1 == a2 && a2 == a3)
        return a1;

    return '.';
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string a1, a2, a3;
        cin >> a1 >> a2 >> a3;

        char c = '.';
        for (int i = 0; i < 3; i++) {
            if (a1[i] != '.' && a1[i] == a2[i] && a2[i] == a3[i]) {
                c = a1[i];
                break;
            }
        }

        if (c == '.') {
            if (a1[0] != '.' && a1[0] == a1[1] && a1[1] == a1[2])
                c = a1[0];
            else if (a2[0] != '.' && a2[0] == a2[1] && a2[1] == a2[2])
                c = a2[0];
            else if (a3[0] != '.' && a3[0] == a3[1] && a3[1] == a3[2])
                c = a3[0];
            else if (a1[0] != '.' && a1[0] == a2[1] && a2[1] == a3[2])
                c = a1[0];
            else if (a3[0] != '.' && a3[0] == a2[1] && a2[1] == a1[2])
                c = a3[0];
        }

        if (c == '.')
            cout << "DRAW" << endl;
        else
            cout << c << endl;
    }

    return 0;
}
