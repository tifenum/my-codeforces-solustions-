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
#define INF 2000000000000000000
#define fr(i,s,e) for(int i = s; i < e; i++)
#define input(n,a) for(int i=0;i<n;i++) cin>>a[i]
#define output(a) for(int i=0;i<a.size();i++) cout<<a[i]<<' ' 
void solve(){
    ll n,ans=0;
    cin>>n;
    map<ll,ll> xx,zz;
    map<vector<ll>,ll> yy;   
    for(int i=0;i<n;i++){
        ll x,y;
        cin>>x>>y;
        yy[{x,y}]++;
        xx[y]++;
        zz[x]++;
    }   
    for(auto i:yy){
        ans-=i.second*(i.second-1)/2;
    }
    for(auto i:xx){
        ans+=i.second*(i.second-1)/2;
    }
    for(auto i:zz){
        ans+=i.second*(i.second-1)/2;
    }
    
    cout<<ans<<endl;
}
signed main()
{
    FAST ;
solve();
}