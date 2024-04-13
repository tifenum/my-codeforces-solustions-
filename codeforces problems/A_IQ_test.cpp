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
    v64 a,b;
    for(int i=0;i<n;i++){
        ll p;
        cin>>p;
        if(p%2==0){
            a.push_back(i+1);
        }
        else{
            b.push_back(i+1);
        }
    }
    if(a.size()==1){
        cout<<a[0]<<endl;
    }
    else{
        cout<<b[0]<<endl;
    }
}
signed main()
{
    FAST ;
solve();
}