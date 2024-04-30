// when the boy said i'm going to be king someday everyone laughs exept the king..
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
bool rr(pair<ll,ll> a,pair<ll,ll> b){
    return a.first>b.first;
}
void solve(){
    ll n,s=0,k=0;
    map<ll,ll> mp;
    cin>>n;
    vector<ll> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]++;
    }
        if(mp.size()==2 && n!=2){
        ll p=0;
        for(auto& o:mp){
            p+=o.first;
        }
        if(p%2==1){
            cout<<-1<<endl;
            return;
        }
        else{
            cout<<p/2<<endl;
            return;
        }
    }
    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1]){
            s++;
            k=i+1;
        }
    }
    // cout<<s<<"feaf"<<endl;
    if(s==0){
        cout<<0<<endl;
        return;
    }
    if(s==n-1){
        cout<<a[0]<<endl;
        return;
    }
    if(s==1 && a[n-2]>a[n-1]){
        cout<<((a[n-2]+a[n-1])/2)+1<<endl;
        return;
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