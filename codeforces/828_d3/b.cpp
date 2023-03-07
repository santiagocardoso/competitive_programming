#include <bits/stdc++.h>
#define endl '\n'
#define pb push_back

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while (t--) {
        int la, nq; cin >> la >> nq;
        vll arr;
        ll soma = 0;
        int pa = 0, im = 0;
        for (int i = 0; i < la; i++) {
            int c; cin >> c;
            if (c % 2 == 0)
                pa++;
            else
                im++;
            soma += c;
        }
        
        while (nq--) {
            int x, y; cin >> x >> y;
            if (x == 0) {
                soma += (pa * y);
                cout << soma << endl;
                if (y % 2 != 0) {
                    im += pa;
                    pa = 0;
                }
            }
            if (x == 1) {
                soma += (im * y);
                cout << soma << endl;
                if (y % 2 != 0) {
                    pa += im;
                    im = 0;
                }
            }
        }

	};

	return 0;
}
 
