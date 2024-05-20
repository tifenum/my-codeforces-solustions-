//the moment of glory requires a lifetime of suffering
//BBBBBBB   AAAAA   CCCCCC   HH    HH   K    K   AAAAA
//BB    BB AA   AA CC        HH    HH   K  K    AA   AA
//BBBBBBB  AAAAAAA CC        HHHHHHHH   KKK     AAAAAAA
//BB    BB AA   AA CC        HH    HH   K   K   AA   AA
//BBBBBBB  AA   AA  CCCCCC   HH    HH   K    K  AA   AA
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
 v64 a,b;
    for(int i=0;i<n;i++){
        ll k;
        cin>>k;
        a.push_back(k);
    }
    for(int i=0;i<n;i++){
        ll k;
        cin>>k;
        b.push_back(k);
    }
    ll sum=0;
    int i=0;
    while(i<n){
        if(a[i]>b[i]){
            a.push_back(b[i]);
            sort(a.begin(),a.end());
            a.pop_back();
            sum++;
            i=0;
        }
        i++;
    }
 
    cout<<sum<<endl;
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