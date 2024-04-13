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
    v64 a(n);
    input(n,a);
    v64 b=a;
    sort(b.begin(),b.end());
    if(a==b){
        cout<<"yes"<<endl;
        cout<<"1 1"<<endl;
        return;
    }
    // output(a);
    // cout<<endl;
    // output(b);
    // cout<<endl;
    // cout<<i+1<<" "<<j+1<<endl;
    int i=0,j=n-1;
    while(i<j){
        if(a[i]==b[i] && a[j]==b[j]){
            i++;
            j--;
            continue;
        }
        if(a[i]==b[i] && a[j]!=b[j]){
            i++;
            continue;
        }
        if(a[i]!=b[i] && b[j]==a[j]){
            j--;
            continue;
        }
        if(a[i]!=b[i] && b[j]!=a[j]){
            break;
        }
    }
    v64 p,h;
    for(int o=i;o<j+1;o++){
        p.push_back(a[o]);
        h.push_back(b[o]);
    }
    reverse(p.begin(),p.end());
    if(p==h){
        cout<<"yes"<<endl;
        cout<<i+1<<" "<<j+1<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
}
signed main()
{
    FAST ;
    ll t;
    solve();
}