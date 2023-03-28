#include <bits/stdc++.h>
#define endl '\n'
#define pb push_back

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

std::string highestScoringWord(const std::string &str) {
    int maior = 0;
    int aux = 0;
    int pos = 0;
    for (int i = 0; i < str.size(); i++) {
        aux += (int)str[i] - 96;
        if (aux > maior) {
            maior = aux;
            aux = 0;
        }
        if (str[i] == ' ') {
            aux = maior;
            maior = 0;
        }
    }
}

int main() {
    printf("%s\n", highestScoringWord("man i need a taxi up to ubud"));

	return 0;
}
