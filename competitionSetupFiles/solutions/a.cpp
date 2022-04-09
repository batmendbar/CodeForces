#include<bits/stdc++.h>
using namespace std;

#define nl '\n';
typedef long long ll;
const long long MOD = 1e9 + 7;
//const long long MOD = 998244353;
const int IINF = 2e9 + 5;
const long long LLINF = (long long) (9e18) + 5;
const int dx[4] = {1,0,-1,0};
const int dy[4] = {0,1,0,-1};

typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<pair<int, int> > vpii;
#define pb push_back

typedef pair<int, int> pii;
#define mp make_pair
#define F first
#define S second

template <class myType>
void print(vector<myType>& v) {
    int sz = v.size();
    for (int i = 0; i < sz; i++) {
        cout << v[i] << ' ';
    }
    cout << '\n';
}

template <class myType>
void read(vector<myType>& v, int n) {
    v.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i]; 
    }
}

ll fpow(ll base,ll power){
    ll ans=1;
    while(power>0){
        if(power%2==1){
            ans *= base;            ans %= MOD;
        }
        power/=2;
        base *= base;        base %= MOD;
    }
    return ans;
}

ll fact(ll n) {
    ll ans = 1;
    for (ll i = 1; i <= n; i++) {
        ans *= i;        ans %= MOD;
    }
    return ans;
}
 
ll C(ll n, ll k) {
    ll ans = 1;
    ans *= fact(n);    ans %= MOD;
    ans *= fpow(fact(k), MOD-2);    ans %= MOD;
    ans *= fpow(fact(n-k), MOD-2);    ans %= MOD;
    return ans;
}

void sieve(vector<int>& primes, int nn) { // returns vector
    vector<bool> used_sv(nn, 0);
    for (int i = 2; i < nn; i++) {
        if (used_sv[i]) continue;
        primes.pb(i);
        for (int j = i; j < nn; j+= i) {
            used_sv[j] = 1;
        }
    }
}


const int N = (1e5)+5;

//------------------------------------------------------

void solve() {
    cout << "Hello, world!" << nl;
}

//------------------------------------------------------

int main(int argc, char *argv[]) {
    if (argc > 1) freopen(argv[1], "r", stdin); 
    ios_base::sync_with_stdio(0); cin.tie(0);
    int T; cin >> T; for (int i = 1; i <= T; i++) {solve();}
    // solve();
}

