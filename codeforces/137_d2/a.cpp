#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;

    while (t > 0) {
        int n; cin >> n;
        
        vector<int> d;
        for (int i = 0; i < n; i++) {
            int c; cin >> c;
            d.push_back(c);
        }

        int total = 0;

        for (int i = 0; i <= (9 - n); i++)
            for (int j = i + 1; j <= (9 - n); j++)
                total += 6;

        cout << total << '\n';

        t--;
    }

    return 0;
}
 
