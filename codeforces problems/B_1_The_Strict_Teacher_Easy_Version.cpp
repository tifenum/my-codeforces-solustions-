//the moment of glory requires a lifetime of suffering
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
    ll n,m,q;
    cin>>n>>m>>q;
    vector<ll> a(m);
    ll m1,m2;
    cin>>m1>>m2;
    ll sum;
    cin>>sum;
    ll mx=max(m1,m2),mn=min(m1,m2);
    if(0<=sum && sum<=mn){
        cout<<mn-1<<endl;
        return;
    }
    if(mx<=sum && sum<=n){
        cout<<n-mx<<endl;
        return;
    }
    if(mn<=sum && sum<=mx){
        cout<<(mx-mn)/2<<endl;
        return;
    }
}
signed main()
{
    FAST ;
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
}