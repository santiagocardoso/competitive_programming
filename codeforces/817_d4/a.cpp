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
        string name; cin >> name;

        if (n != 5)
            cout << "NO" << endl;
        else {
            int t = 0, i = 0, m = 0, u = 0, r = 0;
            for (int j = 0; j < n; j++) {
                if (name[j] == 'T')
                    t++;
                if (name[j] == 'i')
                    i++;
                if (name[j] == 'm')
                    m++;
                if (name[j] == 'u')
                    u++;
                if (name[j] == 'r')
                    r++;
            }
            if (t == 1 && i == 1 && m == 1 && u == 1 && r == 1)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }

    return 0;
}
 
