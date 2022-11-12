#include<bits/stdc++.h>
using namespace std;

using ll =  long long;
// const long long MOD = 1e9 + 7;
const long long MOD = 998244353;
const int IINF = 2e9 + 5; const long long LLINF = (long long)(9e18) + 5;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

using vll = vector<long long>;
using vvll = vector<vector<long long> >;
using pll = pair<long long, long long>;
#define all(x) x.begin(), x.end()
#define rep(i,L,R) for (int i = L; i < R; i++)

template <class myType>
void print(vector<myType> &v, ll printCount);
template <class myType>
void read(vector<myType> &v, ll n);
ll fpow(ll base, ll power);
ll fact(ll n);
ll C(ll n, ll k);
ll INV(ll n);
vll primes(int nn);


void solve() {
    ll n;
    cin >> n;
    vll v(n);
    read(v, n);
}

//------------------------------------------------------

int main(int argc, char *argv[])
{
    cout.precision(17);
    if (argc > 1)
        freopen(argv[1], "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T; cin >> T; for (int i = 1; i <= T; i++) {solve();}
    //solve();
    return 0;
}

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

vll primes(ll nn)
{
    vll primes;
    vll used(nn+5, 0);
    for (int i = 2; i <= nn; i++)
    {   
        if (used[i] == 1) continue;
        primes.push_back(i);
        for (int j = i; j <= nn; j += i)
        {
            used[j] = 1;
        }
    }
    return primes;
}

template <class myType>
void print(vector<myType> &v, ll printCount)
{
    for (int i = 0; i < printCount; i++)
    {
        cout << v[i] << ' ';
    }
    cout << '\n';
}

template <class myType>
void read(vector<myType> &v, ll n)
{
    v.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
}
