#include <bits/stdc++.h>
#define endl '\n'
#define pb push_back

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

int main() {
    int n; cin >> n;
    vi array;
    for (int i = 0; i < n; i++) {
        int c; cin >> c;
        array.pb(c);
    }

    // int size = sizeof(array) / sizeof(int);
    int size = n;
    for (int i = 0; i < size; i++)
        if (array[i] % 2 != 0) {
            for (int j = i; j < size; j++)
                if (array[j] % 2 != 0 && array[j] < array[i]) {
                    int aux = array[i];
                    array[i] = array[j];
                    array[j] = aux;
                }
        }
      
    // return array;

    for (int i = 0; i < n; i++) {
        cout << array[i] << ' ';
    }
    cout << endl;

	return 0;
}
