#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <iostream>
#include <istream>
#include <iterator>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
#include <tuple>
#include <cstdint>
#include <iomanip>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define rep(i, n) for(ll i = 0; i < (n); i++)
#define revrep(i, n) for(ll i = (n)-1; i >= 0; i--)
#define pb push_back
#define f first
#define s second
#define chmin(x, y) x = min(x, y);
#define chmax(x, y) x = max(x, y);
const ll INFL = 1LL << 60;//10^18 = 2^60
ll MOD = 1000000007;
//ll MOD = 998244353;
struct mint{
  ll x;
  mint(ll x=0):x(x % MOD){}
  mint& operator+=(const mint a){
    (x += a.x) %= MOD;
    return *this;
  }
  mint& operator-=(const mint a){
    (x += MOD-a.x) %= MOD;
    return *this;
  }
  mint& operator*=(const mint a){
    (x *= a.x) %= MOD;
    return *this;
  }
  mint& operator%=(const mint a){
    (x %= a.x);
    return *this;
  }
  mint& operator++ (int){
    (x += 1) %= MOD;
    return *this;
  }
  mint& operator-- (int){
    (x += MOD-1) %= MOD;
    return *this;
  }
  mint operator+(const mint a) const{
    mint res(*this);
    return res+=a;
  }
  mint operator-(const mint a) const{
    mint res(*this);
    return res-=a;
  }
  mint operator*(const mint a) const{
    mint res(*this);
    return res*=a;
  }
  mint operator%(const mint a) const{
    mint res(*this);
    return res%=a;
  }
  mint po(ll t) const{
    if(!t) return 1;
    mint a = po(t>>1);
    a *= a;
    if(t&1) a *= *this;
    return a;
  }
  mint inverse() const{
    return po(MOD-2);
  }
  mint& operator/=(const mint a){
    return (*this) *= a.inverse();
  }
  mint operator/(const mint a) const{
    mint res(*this);
    return res/=a;
  }
  bool operator == (const mint a){
    return this->x == a.x;
  }
  bool operator != (const mint a){
    return this->x != a.x;
  }
  void get(){
    cout << x << endl;
  }
  void ge(){
    cout << x << " ";
  }
};const mint Mint = 0;
