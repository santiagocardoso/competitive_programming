#include <stdio.h>
#include <stdlib.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t > 0) {
        int n, r;
        scanf("%d%d", &n, &r);

        int mat[n][n];

        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                mat[i][j] = 0;

        while (r > 0) {
            int x, y;
            scanf("%d%d", &x, &y);

            mat[x-1][y-1] = 1;

            for (int j = 0; j < n; j++)
                if (mat[x-1][j] != 1)
                    mat[x-1][j] += 2;
            for (int i = 0; i < n; i++)
                if (mat[i][y-1] != 1)
                    mat[i][y-1] += 2;

            r--;
        }

        int f = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (mat[i][j] == 1) {
                    if (mat[i+1][j] == 2 || mat[i-1][j] == 2 || mat[i][j+1] == 2 || mat[i][j-1] == 2) {
                        f++;
                    }
                }
            }
        }
        if (f > 0)
            printf("YES\n");
        if (f == 0)
            printf("NO\n");
/*
        for (int i = 0; i < n; i++) {
            printf("\n");
            for (int j = 0; j < n; j++) {
                printf("%d ", mat[i][j]);
            }
        }
*/
        t--;
    }


    return 0;
}
 
