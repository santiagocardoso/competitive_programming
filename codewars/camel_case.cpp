#include <bits/stdc++.h>
#define endl '\n'
#define pb push_back

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

char lower_to_upper(char c) {
    return (c & 0b01011111);
}

string to_camel_case(string str) {
    string aux = "";
    int cont = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '-' || str[i] == '_')
            str[i + 1] = lower_to_upper(str[i + 1]);
        if (str[i] != '-' && str[i] != '_') {
            aux += str[i];
            cont++;
        }
    }

    return aux;
}
