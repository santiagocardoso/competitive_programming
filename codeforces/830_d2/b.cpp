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
        int n; cin >> n;
        string s; cin >> s;
        
        int contz = 0;
        int cont = 0;
        int flip = s[0];
        for (int i = 0; i < n; i++) {
            if (s[i] != flip) {
                cont++;
                flip = s[i];
            }
            if (s[i] == '0')
                contz++;
        }
        
        if (s[0] == '0' && n > 1 && contz != n)
            cont--;

        cout << cont << endl;
	}

	return 0;
}
 
