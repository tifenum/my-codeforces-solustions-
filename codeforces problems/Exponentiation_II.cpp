// when the boy said i'm going to be king someday everyone laughs exept the king..
#include <bits/stdc++.h>
#define ll long long 
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef vector<int> v32;
typedef vector<ll> v64;
const double EPS = 0.00000001;
const ll MOD = 1e9 + 7;
#define INF 2e18
#define fr(i,s,e) for(int i = s; i < e; i++)
#define input(n,a) for(int i=0;i<n;i++) cin>>a[i]
#define output(a) for(int i=0;i<a.size();i++) cout<<a[i]<<' ' 
ll POW(ll a,ll b, ll mod)
{
    if(b==0) return 1;
    if(b==1) return a%mod;
    ll temp=POW(a,b/2,mod);
    if(b%2==0) return (temp*temp)%mod;
    else return (((temp*temp)%mod)*a)%mod;
}

signed main()
{
    FAST ;
    ll t;
    cin>>t;
    while(t--){
    ll a,b,c;
    
        cin>>a>>b>>c;
        ll pw=POW(b,c,MOD-1);
        cout<<POW(a,pw,MOD)<<"\n";
    
}}
