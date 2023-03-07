#include <bits/stdc++.h>
using namespace std;

int main() {
    int m[5][5];
    
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            cin >> m[i][j];

    int x = 0;
    int posi, posj;

    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            if (m[i][j] == 1) {
                posi = i;
                posj = j;
            }            
    
    while (m[2][2] != 1) {
        if (posi != 2 && posi > 2) {
            m[posi - 1][posj] = m[posi][posj];
            posi = posi-1;
            x++;
        }

        if (posi != 2 && posi < 2) {
            m[posi + 1][posj] = m[posi][posj];
            posi = posi + 1;
            x++;
        }

        if (posj != 2 && posj < 2) {
            m[posi][posj + 1] = m[posi][posj];
            posj = posj + 1;
            x++;
        }

        if (posj != 2 && posj > 2) {
            m[posi][posj - 1] = m[posi][posj];
            posj = posj - 1;
            x++;
        }
    }

    if (m[2][2] == 1)
        cout << x << endl;

    return 0;
}
 
