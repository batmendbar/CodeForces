#include<bits/stdc++.h>
using namespace std;

using ll =  long long;
// const long long MOD = 1e9 + 7;
const long long MOD = 998244353;
const int IINF = 2e9 + 5; 
const long long LLINF = (long long)(9e18) + 5;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

using vll = vector<long long>;
using vvll = vector<vector<long long> >;
using pll = pair<long long, long long>;

ll fpow(ll base, ll power)
{
    base %= MOD;
    ll ans = 1;
    while (power > 0)
    {
        if (power % 2 == 1)
        {
            ans *= base;
            ans %= MOD;
        }
        power /= 2;
        base *= base;
        base %= MOD;
    }
    return ans;
}

ll fact(ll n)
{
    ll ans = 1;
    for (ll i = 1; i <= n; i++)
    {
        ans *= i;
        ans %= MOD;
    }
    return ans;
}

ll C(ll n, ll k)
{
    ll ans = 1;
    ans *= fact(n);
    ans %= MOD;
    ans *= fpow(fact(k), MOD - 2);
    ans %= MOD;
    ans *= fpow(fact(n - k), MOD - 2);
    ans %= MOD;
    return ans;
}

ll INV(ll n) {
  return fpow(n, MOD-2);
}

//------------------------------------------------------

int main(int argc, char *argv[])
{
}

