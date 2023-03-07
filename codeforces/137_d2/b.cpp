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
		int x; cin >> x;
		vi p(x);

		int ini = 0;
		int fim = x-1;

		for (int i = 1; i <= x; i += 2) {
			p[ini] = i;
			ini++;
		}
		for (int i = 2; i <= x; i += 2) {
			p[fim] = i;
			fim--;
		}

		for (int i = 0; i < x; i++)
			cout << p[i] << ' ';
		cout << endl;
	}

	return 0;
}
 
