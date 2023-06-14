#include <bits/stdc++.h>
#define endl '\n'
#define pb push_back

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

bool scramble(string s1, string s2) {
    string s = s1;
    bool flag = true;
    for (size_t i = 0; i < s2.length(); i++) {
        for (size_t j = 0; j < s.length(); j++) {
            if (s2[i] == s[j]) {
                flag = true;
                s[j] = 'A';
                break;
            }
            else
                flag = false;
        }
        if (!flag)
            return false;
    }

    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    printf("%d\n", scramble("rkqodlw", "world"));
    printf("%d\n", scramble("cedewaraaossoqqyt", "codewars"));
    printf("%d\n", scramble("katas", "steak"));
    printf("%d\n", scramble("scriptjavx", "javascript"));
    printf("%d\n", scramble("scriptingjava", "javascript"));
    printf("%d\n", scramble("scriptsjava", "javascript"));
    printf("%d\n", scramble("javscripts", "javascript"));
    printf("%d\n", scramble("aabbcamaomsccdd", "commas"));
    printf("%d\n", scramble("commas", "commas"));
    printf("%d\n", scramble("sammoc", "commas"));

	return 0;
}

