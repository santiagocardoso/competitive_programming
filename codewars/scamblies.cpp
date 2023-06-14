#include <bits/stdc++.h>
#define endl '\n'
#define pb push_back

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

bool scramble(const std::string& s1, const std::string& s2){
    map<char, int> mapa;
    
    for (int i = 0; i < s1.size(); i++)
        mapa[i] = s1[i]; 
}

int main() {
    if (scramble("rkqodlw", "world"))
        cout << 1 << endl;
    else
        cout << 0 << endl;

    return 0;
}
