//the moment of glory requires a lifetime of suffering
//BBBBBBB   AAAAA   CCCCCC   HH    HH   K    K   AAAAA
//BB    BB AA   AA CC        HH    HH   K  K    AA   AA
//BBBBBBB  AAAAAAA CC        HHHHHHHH   KKK     AAAAAAA
//BB    BB AA   AA CC        HH    HH   K   K   AA   AA
//BBBBBBB  AA   AA  CCCCCC   HH    HH   K    K  AA   AA
#include <bits/stdc++.h>
#define ll long long 
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef vector<int> v32;
typedef vector<ll> v64;
const double EPS = 0.00000001;
const ll MOD = 1e9 + 7;
int gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
int lcm(int a, int b) { return a * (b / gcd(a, b)); }
#define INF 2e18
#define fr(i,s,e) for(int i = s; i < e; i++)
#define input(n,a) for(int i=0;i<n;i++) cin>>a[i]
#define output(a) for(int i=0;i<a.size();i++) cout<<a[i]<<' ' 
void solve(){
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    map<char,ll> a;
    for(int i=0;i<k;i++){
        char c;
        cin>>c;
        a[c]++;
    }
    v64 p;
    ll l=0;
    for(int i=0;i<n;i++){
       if(a[s[i]]==1){
        l++;
       }
       else{
        p.push_back(l);
        l=0;
       }
    }
    p.push_back(l);
    // output(p);
    // cout<<endl;
    ll ans=0;
    for(int i=0;i<p.size();i++){

        ans+=((p[i]*(p[i]+1))/2);
    }
    cout<<ans<<endl;
}
signed main()
{
    FAST ;
solve();
}