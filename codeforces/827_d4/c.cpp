#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;

    while (t > 0) {
        char m[8][8];
        
        for (int i = 0; i < 8; i++)
            for (int j = 0; j < 8; j++)
                cin >> m[i][j];
        
        int b = 0;

        for (int j = 0; j < 8; j++)
            if (m[0][j] == 'B' && m[1][j] == 'B' && m[2][j] == 'B' && m[3][j] == 'B' && m[4][j] == 'B' && m[5][j] == 'B' &&m[6][j] == 'B' && m[7][j] == 'B') {
                b++;
            }
        
        int r = 0;

        for (int i = 0; i < 8; i++)
            if (m[i][0] == 'R' && m[i][1] == 'R' && m[i][2] == 'R' && m[i][3] == 'R' && m[i][4] == 'R' && m[i][5] == 'R' &&m[i][6] == 'R' && m[i][7] == 'R') {
                r++;
            }

        if (r > 0)
            cout << 'R' << endl;
        if (b > 0)
            cout << 'B' << endl;

        t--;
    }

    return 0;
}
 
