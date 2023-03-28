#include <bits/stdc++.h>
#define endl '\n'
#define pb push_back

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

int findOdd(const std::vector<int>& numbers) {
    map<int,int> mapa;

    for (int i = 0; i < numbers.size(); i++)
        mapa[numbers[i]]++;
    
    int maior_freq = 0, x;
    for (auto [num, f] : mapa)
        if (f > maior_freq && f % 2 != 0) {
            maior_freq = f;
            x = num;
        }

    return x;
}
