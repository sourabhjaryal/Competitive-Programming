/*
RAone00
Rohit sharma
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair < ll, ll > pll;
typedef vector < vector < ll > > matrix;
typedef vector < ll > vll;

#define pb push_back
#define debug(x) cout << (#x) << " is " << (x) << endl
#define fast_io() ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0)

const ll mod = 1e9 + 7;
const ll inf = LLONG_MAX;
const ll N = 1e5 + 10;

int main() {
    fast_io();
    string n;
    cin >> n;
    char s = n[0];
    int k = 1, m = 1;
    for (int i = 1; i < n.length(); ++i) {
        if (s == n[i]) {
            k++;
        } else {
            m = max(m, k);
            k = 1;
        }
        s = n[i];
    }
    cout << max(m, k) << "\n";
    return 0;
}
