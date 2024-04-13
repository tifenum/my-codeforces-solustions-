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
bool rr(const pair<int,int>& a,const pair<int,int>&b){
    return a.first>a.second;
}
void solve(){
    ll n,k,sum=0,som=0;
    cin>>n>>k;
    v64 a(n);
    input(n,a);
    ll mx1=0,mx2=0,j=0;
    for(int i=0;i<n;i++){
        if(a[i]>a[k-1] && j==0){
            mx1=i+1;
            j++;
            continue;
        }
        if(a[i]>a[k-1] && j==1 ){
            mx2=i+1;
            break;    
        }
    }
    // for(int i=0;i<n;i++){
    //     cin>>a[i].first;
    //     a[i].second=i+1;
    // }
    // sort(a.begin(),a.end(),rr);
    // ll mx1=a[0].second,mx2=a[1].second;

    if(mx1==0){
        cout<<n-1<<endl;
        return;
    }

    if(k<mx1){
        ll u =mx1-2;
        if(u>0){
            cout<<u<<endl;
        }
        else{
            cout<<0<<endl;
        }
return;    }
    if(k<mx2 && k>mx1 || mx2==0){
        ll t;            // cout<<mx1<<" "<<mx2<<endl;
        if(mx1==1){
            t=max(mx1-2,k-mx1-1);
        }
        else{

         t=max(mx1-2,k-mx1);
        }
        if(t>0){
            cout<<t<<endl;
        }
        else{

            cout<<0<<endl;
        }
        return;
    }
    if(k>mx2){
        ll r;
        if(mx1==1){
            r=max(mx1-2,mx2-mx1-1);
        }
        else{
        r=max(mx1-2,mx2-mx1);

        }
        if(r>0){
            cout<<r<<endl;
        }
        else{
            cout<<0<<endl;
        }
        return;
    }

    // v64 b=a;
    // vector<ll> y;
    // ll o,j=0;
    // int i=0;
    // while(a[i]<a[k]){
    //     sum++;
    //     i++;
    // }

    // for(int i=0;i<n;i++){
    //     // if(i==k-1){
    //     //     break;
    //     // }
    //     if(a[i]<a[k-1] && j==0){
    //         sum++;
    //     }
    //     if(a[i]<a[k-1] && j==1){
    //         som++;
    //     }
    //     if(a[i]>a[k-1]){
    //         y.push_back(i);
    //         j++;
    //     }
    //     if(j==2){
    //         break;
    //     }
    // }
    // if(k-1<y[0]){
    //     cout<<sum<<endl;
    //     return;
    // }

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