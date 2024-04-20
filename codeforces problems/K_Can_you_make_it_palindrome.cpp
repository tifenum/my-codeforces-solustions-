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
    ll n,m;
    cin>>n>>m;
    string a,b;
    cin>>a>>b;
    map<char,ll> y,u;
    for(int i=0;i<n;i++){
        y[a[i]]++;
    }
    for(int j=0;j<m;j++){
        u[b[j]]++;
    }
    if(n<m){
        for(auto& i:y){
            if(i.second>u[i.first]){
                cout<<"NO"<<endl;
                return;
            }
            else{
                u[i.first]-=i.second;
            }
        }
        ll count=0;
        for(auto& o:u){
            if(o.second%2==1){
                count++;
            }
            if(count==2){
                cout<<"NO"<<endl;
                return;
            }
        }
        cout<<"YES"<<endl;
        return;
    }
    if(n>m){
        for(auto& i:u){
            if(i.second>y[i.first]){
                cout<<"NO"<<endl;
                return;
            }
            else{
                y[i.first]-=i.second;
            }
        }
        ll count=0;
        for(auto& o:y){
            if(o.second%2==1){
                count++;
            }
            if(count==2){
                cout<<"NO"<<endl;
                return;
            }
        }
        cout<<"YESS"<<endl;
        return;
    }
    if(n==m){
        for(auto& p:y){
            if((u[p.first]+p.second)%2==1 || u[p.first]==0){
                cout<<"NO"<<endl;
                return;
            }
        }
        cout<<"YES"<<endl;
        return;
    }
}
signed main()
{
    FAST ;
    solve();
}