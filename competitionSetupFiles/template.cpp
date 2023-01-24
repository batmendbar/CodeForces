#include<bits/stdc++.h>
using namespace std;

using ll = long long;
// const long long MOD = 1e9 + 7;
// const long long MOD = 998244353;
const int IINF = 2e9 + 5; 
const long long LLINF = (long long)(9e18) + 5;

using vll = vector<long long>;
using vvll = vector<vector<long long>>;
using pll = pair<long long, long long>;

void solve(int I) {
    int n; cin >> n;
    vll v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
}

//------------------------------------------------------

int main(int argc, char *argv[])
{
    cout.precision(7);
    if (argc > 1)
        freopen(argv[1], "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T; cin >> T; for (int I = 1; I <= T; I++) {solve(I);}
    //solve();
    return 0;
}