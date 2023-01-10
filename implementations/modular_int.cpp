#include<bits/stdc++.h>
using namespace std;

//Copied from Turkhuu: https://codeforces.com/contest/1783/submission/188470532

template <typename T>
T power(T a, long long b) {
  T s = 1;
  for (; b > 0; a *= a, b /= 2) {
    if (b % 2 == 1) {
      s *= a;
    }
  }
  return s;
}

template <int mod>
struct modular_int {
  using mint = modular_int;
  int value;
  modular_int() : value(0) {
  }
  modular_int(long long v) {
    if (-mod < v && v < mod) {
      value = v;
    } else {
      value = v % mod;
    }
    if (value < 0) {
      value += mod;
    }
  }
  mint& operator+=(const mint& a) {
    value += a.value;
    if (value >= mod) {
      value -= mod;
    }
    return *this;
  }
  mint& operator-=(const mint& a) {
    value -= a.value;
    if (value < 0) {
      value += mod;
    }
    return *this;
  }
  mint& operator*=(const mint& a) {
    value = (int)((long long)value * a.value % mod);
    return *this;
  }
  mint& operator/=(const mint& a) {
    return *this *= mint(a).inv();
  }
  mint operator-() const {
    return -value;
  }
  mint inv() {
    return power(*this, mod - 2);
  }
  friend mint operator+(const mint& a, const mint& b) {
    return mint(a) += b;
  }
  friend mint operator-(const mint& a, const mint& b) {
    return mint(a) -= b;
  }
  friend mint operator*(const mint& a, const mint& b) {
    return mint(a) *= b;
  }
  friend mint operator/(const mint& a, const mint& b) {
    return mint(a) /= b;
  }
  friend istream& operator>>(istream& is, mint& a) {
    return is >> a.value;
  }
  friend ostream& operator<<(ostream& os, const mint& a) {
    return os << a.value;
  }
};
using mint = modular_int<998244353>;

//------------------------------------------------------

int main(int argc, char *argv[])
{
    mint a = 998244350;
    cout << a * a << '\n';
}
