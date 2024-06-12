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
    ll n,s=0,k=0;
    cin>>n;
    v64 a(n);
    input(n,a);
    ll max=0;
    vector<bool> b(n);
    for(int i=0;i<n;i++){
        if (a[i] == 0 && (i == 0 || b[i - 1])) {
            k++;
            continue;
         }
        s+=a[i];
        if(max<a[i]){
            max=a[i];
        }
        if(s==2*max){
            k++;
            b[i]=true;
        }
        else{
            b[i]=false;
        }
    }
    cout<<k<<endl;  
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