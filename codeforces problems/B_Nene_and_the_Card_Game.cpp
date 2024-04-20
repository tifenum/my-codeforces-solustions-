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
    ll n,sum=0;
    cin>>n;
    v64 a(n);
    input(n,a);
    sort(a.begin(),a.end());
    for(int i=0;i<n-1;i++){
        if(a[i]==a[i+1]){
            sum++;
        }
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