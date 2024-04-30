//the moment of glory requires a liftime of suffering
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
    ll n,k,r=0;
    cin>>n>>k;
    v64 a(n),pf(n+1);
    for(int i=0;i<n;i++){
        cin>>a[i];
        pf[i+1]=pf[i]+a[i];
       r+=a[i];
    }
    // int m=pf[n-];
    int s=k,e=0;
    int m=0;
    while(e<=s){
        m=max(-pf[e+2],)
    }

    

    for(int i=1;i<=k;i++){

    }
    // sort(a.begin(),a.end());
    // output(a);
    // cout<<endl;
    // int i=0,j=n-1;
    // int d=0;
    // int l=n-1;
    // for(int i=0;i<k;i++){
        
    //     if(a[d]+a[d+1]>a[l]){
               
    //         l--;
    //         // d+=2;
    //     }
    //     else{
    //         // l--;
    //     d+=2;
    //     } 
    // }
    // cout<<d<<" "<<l<<endl;
    // ll sum=0;
    // for(int i=d;i<l+1;i++){
    //     sum+=a[i];
    // }
    // cout<<sum<<endl;
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