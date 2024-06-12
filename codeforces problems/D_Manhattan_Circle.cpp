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
    ll n,m,s=0,l=0;
    cin>>n>>m;
    map<ll,ll> z;
    map<ll,ll> z1;
    vector<vector<char>> a(n, vector<char>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
            if(a[i][j]=='#'){
                s++;
            }
        }
        z[i]=s;
        s=0;
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
        if(a[j][i]=='#'){
            l++;
        }
    }
    z1[i]=l;
    l=0;
    }
    ll max=0;
    ll o=0;
    for(auto i:z1){
        if(i.second>max){
            max=i.second;
            o=i.first;
        }
    }
    ll max1=0;
    ll f=0;
    for(auto i:z){
        if(i.second>max1){
            max1=i.second;
            f=i.first;
        }
    }
    cout<<f+1<<" "<<o+1<<endl;
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