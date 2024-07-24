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
    ll n,ans=0;
    cin>>n;
    v64 a(n);
    map<vector<ll>,ll> mp;
    input(n,a);
    for(int i=0;i<n-2;i++){
        if(mp[{a[i],a[i+1],0}]>0){
            ans+=mp[{a[i],a[i+1],0}];
        }
        if(mp[{a[i],0,a[i+2]}]>0){
            ans+=mp[{a[i],0,a[i+2]}];
        }
        if(mp[{0,a[i+1],a[i+2]}]>0){
            ans+=mp[{0,a[i+1],a[i+2]}];
        }
        ans-=3*mp[{a[i],a[i+1],a[i+2]}];
        vector<ll> temp;
        mp[{a[i],a[i+1],0}]++;
        // cout<<a[i]<<" "<<a[i+1]<<" "<<0<<endl;
        mp[{a[i],0,a[i+2]}]++;
        // cout<<a[i]<<" "<<0<<" "<<a[i+2]<<endl;
        mp[{0,a[i+1],a[i+2]}]++;
        // cout<<0<<" "<<a[i+1]<<" "<<a[i+2]<<endl;
        mp[{a[i],a[i+1],a[i+2]}]++;
        // cout<<ans<<endl;
    }
    cout<<ans<<endl;
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