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
#define fr(i,s,e) for(int i = s; i < e; i+=2)
#define input(n,a) for(int i=0;i<n;i++) cin>>a[i]
#define output(a) for(int i=0;i<a.size();i++) cout<<a[i]<<' ' 
// bool reversed(int &a,int &b){
// return a>b;}
void solve(){
ll n;
    cin>>n;
 v64 a(n);
v64 dp;
 input(n,a);
 sort(a.begin(),a.end());
//  output(a);
//  cout<<endl;
dp.push_back(max(a[0]+a[1],a[0]*(-1)-a[1]));
    fr(i,2,n){
        if(n%2==1 && i==n-1){
            break;
        }
        if(dp.back()+a[i]+a[i+1]>dp.back()-a[i]-a[i+1]){
            dp.push_back(dp.back()+a[i]+a[i+1]);
            continue;
        }
        else{
            dp.push_back(dp.back()-a[i]-a[i+1]);
            a[i]=-a[i];
            a[i+1]=-a[i+1];
            continue;
        }
    }
    // output(dp);
    // cout<<endl;
    if(n%2==1){
    cout<<dp.back()+a[n-1]<<endl;
    return;
    }
    cout<<dp.back()<<endl;
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