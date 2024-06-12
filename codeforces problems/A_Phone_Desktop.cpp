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
    ll x,y;
    cin>>x>>y;
    ll ans=y/2;
    if(y==0){
        ans=x/15;
        if(x%15!=0){
            ans++;
        }
        cout<<ans<<endl;
        return;
    }
    if(x==0){
        if(y%2==1){
            ans++;
        }
        cout<<ans<<endl;
        return; 
    }
    if(y%2==1){
        if(x>ans*7+11){
            x-=ans*7+11;
            ans+=x/15;
            if(x%15!=0){
                ans++;
            }
        }
        ans++;
    }
    else{
        ll s=y-ans*7;
        if(x>ans*7){
            x-=ans*7;
            ans+=x/15;
            if(x%15!=0){
                ans++;
            }
        }
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