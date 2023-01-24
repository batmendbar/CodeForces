#include<bits/stdc++.h>
using namespace std;
 
using ll = long long;
// const long long MOD = 1e9 + 7;
long long MOD = 998244353;
const int IINF = 2e9 + 5; 
const long long LLINF = (long long)(9e18) + 5;
 
using vll = vector<long long>;
using vvll = vector<vector<long long>>;
using pll = pair<long long, long long>;


vll fact(int n) {
    vll fact(n);
    fact[0] = 1;
    for (int i = 1; i < n; i++) {
        fact[i] = fact[i-1] * i % MOD;
    }
    return fact;
}

vll revFact(int n) {
    vll intInv(n);
    intInv[0] = 1; intInv[1] = 1;
 
    for (int i = 2; i <= n; i++) {
        intInv[i] = (MOD - intInv[MOD%i] * (MOD/i) % MOD) % MOD;
    }
    
    vll factInv(n);
    factInv[0] = 1; factInv[1] = 1;

    for (int i = 1; i < n; i++) {
        factInv[i] = factInv[i-1] * intInv[i] % MOD;
    }
    return factInv;
}

int main () {
}