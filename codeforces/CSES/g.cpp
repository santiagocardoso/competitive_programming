#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, t;
    vector<int> a;
    
    map<int,int> mapa;
    map<int,int> index;

    cin >> n >> t;
    
    for (int i = 0; i < n; i++) {
       int c;
       cin >> c;
       a.push_back(c);
    }
   
    int f = 0;

    for (int i = 0; i < n; i++) {
        if (mapa[t - a[i]]) {
            cout << i + 1 << " " << index[t - a[i]];
            f += 1;
        }

        if(f)
            break;

        mapa[a[i]] += 1;
        index[a[i]] = i + 1;
    }

    if(f == 0)
        cout << -1 << endl;

    return 0;
}
 
