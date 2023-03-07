#include <bits/stdc++.h>
#define endl '\n'
#define pb push_back

using namespace std;
typedef long long ll;
typedef vector<int> vi;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vi arr;
        for (int i = 0; i < n; i++) {
            int c; cin >> c; 
            arr.pb(c);
        }
        string str; cin >> str;
        
        string trn(n, 0);
        for (int i = 0; i < n; i++) {
            char letra = str[i];
            int num = arr[i];
            for (int j = 0; j < n; j++) {
                if (arr[j] == num) {
                    trn[j] = letra;
                }
            }
        }

        if (str == trn)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
	}

	return 0;
}
 
