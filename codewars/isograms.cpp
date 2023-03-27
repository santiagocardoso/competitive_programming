#include <bits/stdc++.h>
#define endl '\n'
#define pb push_back

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

bool is_isogram(string str) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = str[i] & 0b01011111;
    }
    if (str[0] == '\0')
        return 1;
    for (int i = 0; str[i] != '\0'; i++)
        for (int j = 0; str[j] != '\0'; j++)
            if (str[i] == str[j] && i != j && str[j] != ' ')
                return 0;

    return 1;
}
