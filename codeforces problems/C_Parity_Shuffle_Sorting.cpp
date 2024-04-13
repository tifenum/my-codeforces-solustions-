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
bool rr(const pair<ll,int>& a,const pair<ll,int>& b){
    return a.first>b.first;
}
void solve(){
    ll n;
    cin>>n;
    v64 a(n),b;
    vector<pair<ll,ll>> c;
    for(int i=0;i<n;i++){
        input(n,a);
    }
    b=a;
    sort(a.begin(),a.end());
    if(b==a){
        cout<<0<<endl;
        return;
    }
    int i=0,j=n-1;
    while(i<j){
        if(b==a){
            break;
        }
        if((b[i]+b[j])%2==0 && b[i]<b[j]){
            b[i]=b[i];
            c.push_back({i+1,j+1});
            i++;
            j--;
            continue;
        }
        if((b[i]+b[j])%2==0 && b[i]>b[j]){
            b[j]=b[i];
            c.push_back({i+1,j+1});
            i++;
            j--;
            continue;
        }
        i++;
        j--;
    }
    output(b);
    cout<<endl;
    cout<<c.size()<<endl;
    for(int i=0;i<c.size();i++){
        cout<<c[i].first<<" "<<c[i].second<<endl;
    }
    // for(int i=0;i<n;i++){
    //     cout<<a[i].first<<" ";
    // }
    // cout<<endl;
    //     for(int i=0;i<n;i++){
    //     cout<<a[i].second<<" ";
    // }
    // cout<<endl;
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