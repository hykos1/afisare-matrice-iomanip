#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int matrice[4][4] = {
        {1325, 2, 3, 434},
        {511, 65, 71, 8},
        {9, 10, 11, 12},
        {13, 1433, 15, 16}
    };

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << setw(8) << matrice[i][j];
        }
        cout << endl;
    }

    return 0;
}
