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
bool rr(const pair<ll,ll>& a,const pair<ll,ll>& b){
    return a.first<b.first;
}
bool r(const pair<ll,ll>& a,const pair<ll,ll>& b){
    return a.second<b.second;
}
// bool hh(const pair<ll,pair<ll,ll>>& a,const pair<ll,pair<ll,ll>>& b){
//     return a.first<b.first;
// }
void solve(){
    ll n,m,k,sum=0;
    cin>>n>>m>>k;
    vector<pair<ll,ll>> a(n),b;
    for(ll i=0;i<n;i++){
        cin>>a[i].first;
        a[i].second=i+1;
    }
    // vector<pair<ll,pair<ll,ll>>> e;
    b=a;
    sort(a.begin(),a.end(),rr);
    ll i=0;
    ll quantity=0;
        for(int i=0;i<n;i++){cout<<a[i].first<<" ";}
    cout<<endl;
    while(k>0){
        if(k>=m){
            sum+=m*a[i].first;
            k-=m;
            quantity+=m;

            // e.push_back({a[i].second,{a[i].first,m}});
        }
        else{
            sum+=k*a[i].first;
            quantity+=k;
            if(i+1<n-1 && a[i+1].second>a[i].second){
                a[i+1].first+=quantity;
            }
            // e.push_back({a[i].second,{a[i].first,k}});
            k=0;
        }
        i++;
    }
    cout<<sum<<endl;
    // for(int i=0;i<n;i++){cout<<a[i].first<<" ";}
    // cout<<endl;
    // for(int i=0;i<n;i++){
    //     cout<<a[i].second<<" ";
    // }
    // cout<<endl;
    // sort(e.begin(),e.end(),hh);
    // for(int i=0;i<e.size();i++){
    //     cout<<"indice :"<<e[i].first<<" valeur :"<<e[i].second.first<<" quantity :"<<e[i].second.second<<endl;
    // }
    // ll quantity =e[0].second.second;
    // cout<<"quantity :"<<quantity<<endl;

    // for(int i=1;i<e.size();i++){
    //     cout<<"valeur :"<<e[i].second.first<<endl;
    //     sum+=quantity*e[i].second.first;
    //     cout<<"sum :"<<sum<<endl;
    //     quantity+=e[i].second.second;
    // cout<<"quantity :"<<quantity<<endl;
    // }
    // cout<<sum<<endl;
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