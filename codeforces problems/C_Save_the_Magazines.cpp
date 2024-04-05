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
#define input(n,a) for(int i=1;i<=n;i++) cin>>a[i]
#define output(a) for(int i=0;i<a.size();i++) cout<<a[i]<<' ' 
bool isvalid(int i,string s){
    return (i-1>=0 && s[i-1]=='0' && s[i]=='1');
}
void solve(){
ll n;
cin>>n;
string s;
cin>>s;
v64 a(n+1,0);
input(n,a);
s='0'+s;
int i=0,j;
ll sum=0,mn=0,ans=0;
// cout<<s<<endl;
// output(a);
// cout<<endl;
while(i<=n){
    sum=a[i];
    mn=a[i];
    j=i+1;
    while(j<=n && s[j]=='1'){
        mn=min(mn,a[j]);
        sum+=a[j];
        j++;
    }
    ans+=sum-mn;
    i=j;
}
cout<<ans<<endl;
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