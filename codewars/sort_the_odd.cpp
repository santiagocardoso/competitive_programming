#include <bits/stdc++.h>
#define endl '\n'
#define pb push_back

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

std::vector<int> sortArray(std::vector<int> array) {
    if (array.empty())
        return array;
    
    int size = array.size();
    for (int i = 0; i < size; i++)
        if (array[i] % 2 != 0) {
            for (int j = i; j < size; j++)
                if (array[j] % 2 != 0 && array[j] < array[i]) {
                    int aux = array[i];
                    array[i] = array[j];
                    array[j] = aux;
                }
        }
    
    return array;
}
