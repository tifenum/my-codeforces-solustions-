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
bool rr(const pair<int,bool>& a,const pair<int,bool>& b){
    return a.first<b.first;
}
void solve(){
 ll n,c,d;
 cin>>n>>c>>d;
    map<int,int> t;
    v64 a;
 for(int i=0;i<n*n;i++){
    ll p ;
    cin>>p;
    t[p]++;
    a.push_back(p);
 }
 sort(a.begin(),a.end());
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            ll s=0;
            ll o=a[0]+d*j+c*i;
            if(t.count(o)!=0 && t[o]>=1){
                t[o]--;
                continue;
            }
            cout<<"NO"<<endl;
            return;
        }}
    cout<<"YES"<<endl;   
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