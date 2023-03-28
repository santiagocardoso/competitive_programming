#include <bits/stdc++.h>
#define endl '\n'
#define pb push_back

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

std::string highestScoringWord(const std::string &str1) {
    int maior = 0;
    int aux = 0;
    int pos_end = 0;
    
    string str = "";
    for (int i = 0; i < str1.size(); i++)
        str += str1[i];
    str += ' ';

    // a b c d e f g h i j  k  l  m  n  o  p  q  r  s  t  u  v  w  x  y  z
    // 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26

    for (int i = 0; i < str.size(); i++) {
        if (str[i] != ' ')
            aux += (int)str[i] - 96;
        if (str[i] == ' ' && aux > maior) {
            maior = aux;
            pos_end = i;
            aux = 0;
        }
        if (str[i] == ' ' && aux <= maior)
            aux = 0;
        
        cout << str[i] << ' ';
        cout << aux << endl;
    }

    string ans = "";
    int cont = 0;
    cont--;
    for (int i = pos_end - 1; i >= 0; i--) {
        if (str[i] == ' ')
            break;
        ans += str[i];
        cont++;
    }

    for (int i = 0; i < ans.size() / 2; i++) {
        aux = ans[i];
        ans[i] = ans[cont];
        ans[cont] = aux;
        cont--;
    }

    return ans;
}

int main() {
    cout << highestScoringWord("massage yes massage yes massage") << endl;

	return 0;
}
