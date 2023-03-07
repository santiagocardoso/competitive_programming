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
        string s1, s2; cin >> s1 >> s2;
        
        int f = 0;
        int ok = 0;
        for (int i = 0; i < n; i++) {
            if (s1[i] != s2[i]) {
                if (s1[i] == 'G' && s2[i] == 'B' || s1[i] == 'B' && s2[i] == 'G')
                    ok++;
                else
                    f++;
            }
        }

        if (f != 0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
	}

	return 0;
}
 
