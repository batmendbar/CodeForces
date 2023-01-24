#include<bits/stdc++.h>
using namespace std;
 
using ll = long long;
// const long long MOD = 1e9 + 7;
// long long MOD = 998244353;
const int IINF = 2e9 + 5; 
const long long LLINF = (long long)(9e18) + 5;
 
using vll = vector<long long>;
using vvll = vector<vector<long long>>;
using pll = pair<long long, long long>;

vll build_primes(ll nn)
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

vvll build_prime_divisors(ll nn)
{
    vvll prime_divisors(nn+5);
    vll used(nn+5, 0);
    for (int i = 2; i <= nn; i++)
    {   
        if (used[i] == 1) continue;
        for (int j = i; j <= nn; j += i)
        {
            prime_divisors[j].push_back(i);
            used[j] = 1;
        }
    }
    return prime_divisors;
}


int main () {
}