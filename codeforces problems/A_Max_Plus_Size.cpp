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
    ll n;
    cin>>n;
    vector<ll> a(n);
    input(n,a);
    ll s=0,v=0;
    ll mx1=0,mx2=0;
    for(int i=0;i<n;i++){
        if(i%2==0){
        s=max(s,a[i]);
        mx1++;
        }
        else{
            mx2++;
            v=max(v,a[i]);
        }
    }
    cout<<max(s+mx1,v+mx2)<<endl;
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