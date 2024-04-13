// // when the boy said i'm going to be king someday everyone laughs exept the king..
// #include <bits/stdc++.h>
// #define ll long long 
// #define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
// using namespace std;
// typedef vector<int> v32;
// typedef vector<ll> v64;
// const double EPS = 0.00000001;
// const ll MOD = 1e9 + 7;
// #define INF 2e18
// #define fr(i,s,e) for(int i = s; i < e; i++)
// #define input(n,a) for(int i=0;i<n;i++) cin>>a[i]
// #define output(a) for(int i=0;i<a.size();i++) cout<<a[i]<<' ' 
// void solve(){
//     ll n,sum=0,sum1=0;
//     cin>>n;
//     v64 a(n);
//     v64 y;
//     input(n,a);
//     int j=n-1;
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//         if(i>=1 && a[i]!=a[0]){
//             y.push_back(i+1);
//         }
//     }
//     ll k=INF;
//     if(y.size()!=1 || y.size()!=0){
//         sort(y.begin(),y.end());
//         k=y[1]-y[0];
//     for(int p=1;p<y.size()-1;p++){
//         k=min(y[p+1]-y[p],k);
//     }
//     if(y.size()==1 || y.size()==0){
//         cout<<-1<<endl;
//         return;
//     }
//     }
//     while((a[0]==a[j] )&& j!=0){
//         j--;
//         sum++;
//     }
//     int i=0;
//     while((a[i]==a[n-1])&& i!=n-1){
//         i++;
//         sum1++;
//     }
//     ll o=min(sum1,min(sum,k));
//         cout<<o<<endl;
    
// }
// signed main()
// {
//     FAST ;
//     ll t;
//     cin>>t;
//     while(t--){
//         solve();
//     }
// }
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
    ll n,sum=0,sum1=0;
    cin>>n;
    v64 a(n);
    v64 y;
    input(n,a);
    ll k = INF; // Initialize k with a large value
    if(a[0]!=a[n-1]){
        cout<<-1<<endl;
        return;
    }
    for(int i=0;i<n;i++){
        if(i>=1 && a[i]!=a[0]){
            y.push_back(i+1);
        }
    }
    if(y.size() >= 2){
        sort(y.begin(),y.end());
        for(int p=0;p<y.size()-1;p++){ // Start from 0
            k=min(y[p+1]-y[p],k);
        }
    }
    if(y.size()<1){
        cout<<-1<<endl;
        return;
    }
    int j=n-1;
    while((a[0]==a[j] )&& j!=0){
        j--;
        sum++;
    }
    int i=0;
    while((a[i]==a[n-1])&& i!=n-1){
        i++;
        sum1++;
    }
    if(k==1){
        cout<<-1<<endl;
        return;
    }
    ll o=min(sum1,min(sum,k-1));
    cout<<o<<endl;
    
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
