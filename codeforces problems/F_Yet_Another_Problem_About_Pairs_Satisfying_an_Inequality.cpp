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
    ll n;
    cin>>n;
    v64 b(n+1);
    for(int i=1;i<=n;i++){
        cin>>b[i];
    }
    ll sum =0;
    vector<int> v;

    for(int i=1;i<=n;i++){
        if(b[i]>=i){
            continue;
        }
        sum += (long long)(lower_bound(v.begin(), v.end(), b[i]) - v.begin());
		v.push_back(i);
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