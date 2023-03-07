#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, t; cin >> t;

    while (t > 0) {
        cin >> a >> b >> c;

        if (a == b + c || b == a + c || c == a + b)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

        t--;

    };

    return 0;
}
 
