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
// bool rr (const int& a,const int& b){
//     return (a%10)<(b%10);
// }
void solve(){
    ll n;
    cin>>n;
    vector<int> b(10,0);
    for(int i=0;i<n;i++){
        int o;
        cin>>o;
        b[o%10]++;
    }
    // for(int i=0;i<10;i++){
    //     cout<<b[i]<<" ";
    // }
    // cout<<endl;
    // output(b);
    // cout<<endl;

    vector<int> a;
    for(int i=0;i<10;i++){
        for(int j=0;j<min(b[i],3);j++){
            a.push_back(i);
        }
    }
    // output(a);
    // cout<<endl;
    ll m=a.size();
    for(int i=0;i<m;i++){
        for(int j=i+1;j<m;j++){
            for(int k=j+1;k<m;k++){
                if((a[i]+a[j]+a[k])%10==3){
                    cout<<"YES"<<endl;
                    return;
                }
            }
        }
    }
    cout<<"NO"<<endl;
    // for(int i=0;i<n;i++){
    //     ll k;
    //     cin>>k;
    //     a[i]=k%10;
    // }
    // sort(a.begin(), a.end(),rr);
    // // output(a);
    // // cout<<endl;
    // for(ll ptr1=0;ptr1<n-2;ptr1++){
    //     ll ptr2=ptr1+1;
    //     ll ptr3=n-1;
    //     while(ptr2<ptr3){
    //         ll sum=a[ptr1]+a[ptr2]+a[ptr3];
    //     if(sum%10==3 && ptr1!=ptr2 && ptr2!=ptr3 && ptr1!=ptr3){
    //         cout<<"YES"<<endl;
    //         return;
    //     }
    //     if(sum%10>3){
    //         ptr3--;
    //     }
    //     else if(sum%10<3){
    //         ptr2++;
    //     }
    //     }
    // }
    // cout<<"NO"<<endl;
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
