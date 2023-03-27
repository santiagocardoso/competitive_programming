#include <bits/stdc++.h>
#define endl '\n'
#define pb push_back

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

unsigned int countBits(unsigned long long x) {
    int cont = 0;
    while (x > 0) {
        if (x % 2 == 1)
            cont++;
        x /= 2;
    }

    return cont;
}
