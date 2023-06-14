#include <bits/stdc++.h>
#define endl '\n'
#define pb push_back

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

int fat(int n) {
    if (n <= 1)
        return 1;
    else
        return n * fat(n - 1);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while (t--) {
        int n, k, q; cin >> n >> k >> q;
        vi days;
        for (int i = 0; i < n; i++) {
            int a; cin >> a;
            days.pb(a);
        }
       
        int flag = 0;
        int cont = 0;
        int repeat = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                if (days[j] <= q)
                    repeat++;
                else
                    break;
            }
            if (repeat > k) {
                cont += fat(repeat);
                i += repeat;
            }
            if (repeat == k)
                flag = 1;
            repeat = 0;
        }
        if (n % 2 == 0 && cont > 0)
            cont++;
        if (flag)
            cont++;

        cout << cont << endl;
	}

	return 0;
}
