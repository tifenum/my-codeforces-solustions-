// when the boy said i'm going to be king someday everyone laughs exept the king..
#include <bits/stdc++.h>
#define ll long long 
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef vector<int> v32;
typedef vector<ll> v64;
const double EPS = 0.00000001;
const ll MOD = 1e9 + 7;
#define INF 2e18
#define fr(i,s,e) for(int i = s; i < e; i++)
#define input(n,a) for(int i=0;i<n;i++) cin>>a[i]
#define output(a) for(int i=0;i<a.size();i++) cout<<a[i]<<' ' 
void solve(){
    ll k,q;
    cin>>k>>q;
    v64 a(k);
    input(k,a);
    sort(a.begin(),a.end());
    for(int i=0;i<q;i++){
        ll o;
        cin>>o;
        if(o<a[0]){
            cout<<o<<" ";
        }
        else{
            cout<<a[0]-1<<" ";
        }
    }
        cout<<endl;
    
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