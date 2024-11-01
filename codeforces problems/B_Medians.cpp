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
    ll n,k;
    cin>>n>>k;
    v64 a;
    if(n==1){
        cout<<1<<endl;
        cout<<1<<endl;
        return;
    }
    for (int i = 1; i <= std::sqrt(n); ++i) {
        if (n % i == 0) {
            if(i%2==1){
            a.push_back(i);  
            }
            if (i != n / i && (n/i)%2==1) {
                a.push_back(n / i);  
            }
        }
    }
    for(int i=0;i<a.size();i++){
        ll s=n/a[i];
        ll j=(a[i]/2) +1;
        if(s%2==1 && k==a[i]*(s%2)+j){
            cout<<a[i]<<endl;
            for(int i=1;i<=n;i+=s){
                cout<<i<<" ";
            }
            cout<<endl;
            return;
        }
    }
    cout<<-1<<endl;
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