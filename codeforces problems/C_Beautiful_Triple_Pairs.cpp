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
    v64 a(n);
    vector<vector<ll>> c;
    input(n,a);
    for(int i=0;i<n-2;i++){
        v64 f;
        f.push_back(a[i+2]);
        f.push_back(a[i+1]);
        f.push_back(a[i]);
        c.push_back(f);
    }
    ll ans=0;
    for(int i=0;i<c.size();i++){
        for(int j =i+1;j<c.size();j++){
            if((c[i][0]==c[j][0] && c[i][1]==c[j][1] && c[i][2]!=c[j][2]) || (c[i][0]!=c[j][0] && c[i][1]==c[j][1] && c[i][2]==c[j][2]) || (c[i][0]==c[j][0] && c[i][1]!=c[j][1] && c[i][2]==c[j][2])){
                ans++;
            }
        }
    }
    for(int i=0;i<)
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