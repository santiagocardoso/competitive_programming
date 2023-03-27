#include <bits/stdc++.h>
#define endl '\n'
#define pb push_back

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

int getCount(string str){
    int num_vowels = 0;
    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            num_vowels++;

    return num_vowels;
}

int main() {
    string str; cin >> str;
    cout << getCount(str) << endl;

	return 0;
}