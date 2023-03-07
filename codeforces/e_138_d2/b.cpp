#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;

    while (t > 0) {
        int n; cin >> n;

        vector<int> A;
        vector<int> B;
    
        for (int i = 0; i < n; i++) {
            int c; cin >> c;
            A.push_back(c);
        }
        for (int i = 0; i < n; i++) {
            int c; cin >> c;
            B.push_back(c);
        }

        long long tempo = 0;
    
        int maior = B[0];
        int f = 0;

        for (int i = 0; i < n; i++)
            if (B[i] > maior) {
                maior = B[i];
                f = i;
            }

        for (int i = 0; i < f; i++)
            tempo += A[i] + B[i];
        for (int i = f+1; i < n; i++)
            tempo += A[i] + B[i];
        tempo += A[f];

        cout << tempo << '\n';

        t--;
    }

    return 0;
}
 
