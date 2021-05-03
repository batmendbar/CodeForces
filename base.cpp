#include<bits/stdc++.h>
using namespace std;

// vector
typedef vector<int> vi;
#define pb push_back

//repetition
#define FOR(i,a,b) for (int i = a; i < b; i++)
#define ROF(i,a,b) for (int i = b-1; i >= a; i--)
#define itr(v) for(int x : v) 


// pair
typedef pair<int, int> pi;
#define mp make_pair
#define f first
#define s second

//misc
#define nd '\n';
typedef long long ll;
const int MOD = 1e9 + 7;//const int MOD = 998244353;
const int IINF = 1e9 + 5;
const long long LINF = (long long) (1e18) + 5;
const int dx[4] = {1,0,-1,0};
const int dy[4] = {0,1,0,-1};
const int N = (1e5)+5;

ll fpow(ll base,ll power){
    ll ans=1;
    while(power>0){
        if(power%2==1){
            ans *= base;
            ans %= MOD;
        }
        power/=2;
        base *= base;
        base %= MOD;
    }
    return ans;
}

vi sieve(int nn) { // returns vector
    vi primes;
    vector<bool> used_sv(nn, 0);
    FOR(i, 2, nn) {
        if (used_sv[i]) continue;
        primes.pb(i);
        for (int j = i; j < nn; j+= i) {
            used_sv[j] = 1;
        }
    }
    return primes;
}

void solve();

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // freopen("input.txt", "r", stdin);
    int T; cin >> T; while (T--) solve();
}

void solve() {

}