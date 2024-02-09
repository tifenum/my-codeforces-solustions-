#include<bits/stdc++.h>
#include<random>
using namespace std;
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// template<class T> using oset=tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
// template<class T> using omset=tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define fi first
#define se second
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
// #define readInputFile freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define pb push_back
#define eb emplace_back
#define pf push_front
#define pii pair<int,int>
#define pll pair<ll,ll>
#define pld pair<ld,ld>
#define ff first
#define ss second
#define mem(a, b) memset(a, (b), sizeof(a))
#define po pop_back
#define all(x) begin(x), end(x)
#define rall(x) rbegin(x), rend(x)
#define print2d(mat,n,m){for(int i=0;i<(int)(n);i++){for(int j=0;j<(m);j++){cout<<mat[i][j]<<' ';}cout<< endl;}}
// #define endl "\n"
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef vector<vector<ll>> vvll;
typedef vector<ll> vll;
typedef vector<ld> vld;
typedef vector<int> vii;
typedef vector<string> vs;
typedef vector<char> vc;
typedef vector<pll> vpll;
typedef vector<pld> vpld;
typedef pair<int, int> pi;
typedef vector<pi> vpii;
typedef map<int,int> mii;
typedef map<ll,ll> mll;
typedef set<ll> sll;

//debug template
void __print(int x) {cerr << x;} void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;} void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;} void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;} void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;} void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';} void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}
 
//Print Template.
template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second);
    cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""),
                __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif
template <typename T>
void print(vector <T> v) {
    for (T i : v) cout << i << " ";
    cout << '\n';
}
template <typename T>
void print(vector <vector <T>>& v) {
    for (vector <T>& vv : v) {
        for (T& i : vv)
            cout << i << " ";
        cout << '\n';
    }
}
template <typename T>
void read(vector <T>& v) {for (T& i : v) cin >> i;}
template <typename T>
void read(T&& t) {cin >> t;}
template <typename T, typename... Args>
void read(T&& t, Args&&... args){
    cin >> t;
    read(forward<Args>(args)...);
}
template <typename T>
void print(T&& t) {cout << t << '\n';}
template <typename T, typename... Args>
void print(T&& t, Args&&... args){
    cout << t << " ";
    print(forward<Args>(args)...);
}


template<typename T>             vector<T>& operator--            (vector<T>& v){for (auto& i : v) --i;            return  v;}
template<typename T>             vector<T>& operator++            (vector<T>& v){for (auto& i : v) ++i;            return  v;}
template<typename T>             istream& operator>>(istream& is,  vector<T>& v){for (auto& i : v) is >> i;        return is;}
template<typename T>             ostream& operator<<(ostream& os,  vector<T>& v){for (auto& i : v) os << i << ' '; return os;}
ld pie = 3.141592653589793238462643383279502884197169399;
// Find Set LSB = (x&(-x)), isPowerOfTwo = (x & (x-1))
ll mod = 1e9 +7;
bool isprime(ll n){
    if(n<=1){return false;}
    if(n<=3){return true;}
    if(n%2==0||n%3==0){return false;}
    for(ll i=5;i*i<=n;i+=6){
        if(n%i==0||n%(i+2)==0){return false;}
    }
    return true;
}
ll binpow(ll a, ll b, ll m) {
    a %= m;
    ll res = 1;
    while (b > 0) {
        if (b & 1)
            res = (res * a) % m;
        a = (a * a)% m;
        b >>= 1;
    }
    return res;
}
ll modInverse(ll n, ll mod){
    return binpow(n,mod-2,mod);
}
ll comb(ll n, ll r, ll p, vector<ll>& fac) {
    if (r == 0 or n == r) return 1;
    if(r > n) return 0;
    return (fac[n] * modInverse(fac[r], p) % p * modInverse(fac[n - r], p) % p) % p;
}

sll divisors(ll n){sll s;for(ll i=1; i*i<=n;i++){if(n%i==0){s.insert(i);s.insert(n/i);}}return s;}


set<int> primess; 
void seive(){vector<int> is_prime(1e7+1, true);is_prime[0] = is_prime[1] = false;for (int i = 2; i * i <= 1e7; i++){if (is_prime[i]) {for (int j = i * i; j <= 1e7; j += i)is_prime[j] = false;}}for(int i=2;i<=1e7;i++){if(is_prime[i]){
      primess.insert(i);
      }
   }
}
ll add(ll a, ll b, ll mod) {a = a % mod; b = b % mod; return (((a + b) % mod) + mod) % mod;}
ll mul(ll a, ll b, ll mod) {a = a % mod; b = b % mod; return (((a * b) % mod) + mod) % mod;}
ll sub(ll a, ll b, ll mod) {a = a % mod; b = b % mod; return (((a - b) % mod) + mod) % mod;}

map<ll,ll> primeFactors(ll n){  map<ll,ll> m;while (n % 2 == 0){m[2]++;n = n/2;}for (ll i = 3; i <= sqrt(n); i = i + 2){while (n % i == 0){m[i]++;n = n/i;}}if(n > 2)m[n]++;return m;}

ll factorial(ll n, ll mod){ll res =1;for(ll i=1;i<=n;i++){res = mul(res,i,mod);}return res;}

ll C(ll n,ll r){ll res =1;for(ll i=0;i<r;i++){res = res * (n-i) / (i+1);}return res;}

ll toint(string s){ll num =0;for(ll i=0;i<s.size();i++){num = num* 10 + s[i] -'0';}return num;}

ll sumstring (string s){ll sum =0;for(ll i =0;i<s.size();i++){sum += (s[i] -'0');}return sum;}

ll sumdigit (ll n){ll sum =0;while(n){ll rem = n%10;sum += rem;n/=10;}return sum;}

string tobinary(ll x){string a;while(x > 0){a += (x % 2) + '0';x /= 2;}reverse(all(a));return a;}

ll todecimal(string x){ll sum = 0;ll n = x.size(); ll j =0;for(ll i= n-1;i>=0;i--){if(x[i] == '1'){sum += (1LL << j);}j++;}return sum;}

ll ceil(ll n, ll k){return (n + k -1) / k;}

bool ispalin(string s){ll n = s.size();for(ll i=0;i<n;i++){if(s[i] != s[n-i-1]){return false;}}return true;}

bool ispermutation(vll p){sort(all(p));for(ll i =1;i<=p.size();i++){if(p[i-1] != i)return false;}return true;}

bool isperfect(ll x){ll a = sqrtl(x);return a*a == x;}

bool issubsequence(string t, string x){ll j =0;for(ll i=0;i<x.size();i++){ if(x[i] == t[j]){j++;}if(j == t.size())   break;}return j == t.size();}

ll power(ll base,ll exponent){ll res = 1;while(exponent){if(exponent & 1){res = res * base;}base *= base;exponent >>= 1;}return res;}

struct Cmp {
   bool operator()(const pll& l, const pll& r)const
   {
      return l.ss < r.ss;
   }
}; 
bool comp(string s1,string s2){
    for(ll i=0;i<s1.size();i++){
        if(s1[i]==s2[i]) continue;
        return s1[i]<s2[i];
    }
    return false;
}
double area(double dX0, double dY0, double dX1, double dY1, double dX2, double dY2)
{
    double dArea = ((dX1 - dX0)*(dY2 - dY0) - (dX2 - dX0)*(dY1 - dY0))/2.0;
    return (dArea > 0.0) ? dArea : -dArea;
}
ll C(ll n, ll r, ll mod){
   ll ans = 1;
   if(n - r < r)
      r = n - r;
   for(ll i=n;i>n-r;i--) ans = mul(ans,i,mod);
   for(ll i=1;i<=r;i++) ans = mul(ans,modInverse(i,mod),mod);
   return ans;
} 



void solve(){
    ll sum,limit;
    cin>>sum>>limit;
    map<ll,sll,greater<ll>> have;
    for(ll i=1;i<=limit;i++){
        ll cnt = 0;
        ll j = i;
        while(j % 2 == 0){
            cnt += 1;
            j >>= 1;
        }
        ll val = power(2,cnt);
        have[val].insert(i);
    }
    ll ok = 0;
    sll take;
    for(auto i: have){
        sll cur = i.ss;
        while(cur.size() and sum - i.ff >= 0){
            sum -= i.ff;
            take.insert(*cur.begin());
            cur.erase(cur.begin());
        }
        if(sum == 0){
            ok = 1;
            break;
        }
    }
    if(ok){
        print(take.size());
        for(auto i: take)
            cout<<i<<' ';
    }
    else print(-1);
}


int32_t  main(){
   fast;
   ll t;
   // cin>>t;
   t =1; 
   // seive();
   while(t--){
      solve();
   }
}