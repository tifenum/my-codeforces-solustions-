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
ll n,a,b,c;
cin>>n;
v64 coin(3);
input(3,coin);
v64 dp(n+1,-1);
dp[0]=0;
for(int i=1;i<=n;i++){
    for(int j=0;j<3;j++){
        if(coin[j]>i || dp[i-coin[j]]==-1){
            continue;
        }
        dp[i]=max(dp[i],dp[i-coin[j]]+1);
    }
}
cout<<dp[n]<<endl;;
}
signed main()
{
FAST ;
solve();
}