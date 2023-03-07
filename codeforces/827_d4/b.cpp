#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n; cin >> t;

    while (t > 0) {
        cin >> n;

        vector<int> v;
        
        for (int i = 0; i < n; i++) {
            int c; cin >> c;
            v.push_back(c);
        }

        int f = 0;

        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++) {
                if (v[i] == v[j] && i != j)
                    f++;
                }

        if (f > 0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;

        t--;
    }

    return 0;
}
 
