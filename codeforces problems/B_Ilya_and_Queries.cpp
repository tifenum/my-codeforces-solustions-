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

signed main()
{
    FAST ;
    string s;
    cin>>s;
    ll t;
    cin>>t;
    ll p=s.size();
    vector<int> dp(p+1);
    dp[0]=0;
    for(int i=1;i<p;i++){
        if(s[i-1]==s[i]){
            dp[i]=dp[i-1]+1;
        }
        else{
            dp[i]=dp[i-1];

        }
    }
    // dp[p]=dp[p-1]+dp[1];
    // output(dp);
    // cout<<endl;
    while(t--){
        ll n,m;
        cin>>n>>m;
        cout<<dp[m-1]-dp[n-1]<<endl;

        // cout<<sum<<endl;
    }
}   