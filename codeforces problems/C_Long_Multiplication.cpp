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
    string n,m;
    cin>>n>>m;
    bool f=false; 
    for(int i =0;i<n.size();i++){
        if(n[i]==m[i]){
            continue;
        }
        if(n[i]-'0'>m[i]-'0'){
            if(!f){
            f=true;
            continue;
            }
            else{
            char p=m[i];
            m[i]=n[i];
            n[i]=p;
            continue;
            }
        }
        if(n[i]-'0'<m[i]-'0'){
            if(!f){
            char p=n[i];
            n[i]=m[i];
            m[i]=p;
            f=true;
            }
            else{
                continue;
            }
        }
    }
    cout<<n<<endl;
    cout<<m<<endl;
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