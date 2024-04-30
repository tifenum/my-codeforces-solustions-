//the moment of glory requires a lifetime of suffering
//BBBBBBB   AAAAA   CCCCCC   HH    HH   K    K   AAAAA
//BB    BB AA   AA CC        HH    HH   K  K    AA   AA
//BBBBBBB  AAAAAAA CC        HHHHHHHH   KKK     AAAAAAA
//BB    BB AA   AA CC        HH    HH   K   K   AA   AA
//BBBBBBB  AA   AA  CCCCCC   HH    HH   K    K  AA   AA
#include <bits/stdc++.h>
#define ll long long 
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef vector<int> v32;
typedef vector<ll> v64;
const double EPS = 0.00000001;
const ll MOD = 1e9 + 7;
int gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
int lcm(int a, int b) { return a * (b / gcd(a, b)); }
#define INF 2e18
#define fr(i,s,e) for(int i = s; i < e; i++)
#define input(n,a) for(int i=0;i<n;i++) cin>>a[i]
#define output(a) for(int i=0;i<a.size();i++) cout<<a[i]<<' ' 
void solve(){
    ll n;
    cin>>n;
    v64 a(n);
    v64 b,c;
    input(n,a);
    ll o=1;
    if(n==5){
        for(int i=0;i<5;i++){

        o*=a[i];
        }
        cout<<o<<endl;
        return;
    }
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++){
        if(a[i]<0 && b.size()<5){
            b.push_back(a[i]);
        }
        else{
            break;
        }
    }
    for(int i=0;i<n;i++){
        if(a[n-1-i]>0 && c.size()<5){
            c.push_back(a[n-1-i]);
        }
        else{
            break;
        }
    }
    int i=0;
    v64 ans;
    int j=c.size(); 
    
    while(ans.size()<5 && j>0 && i<b.size()){
        if(i+2<b.size() && (b[i]*b[i+1])>c[j-1] && ans.size()!=4){
            ans.push_back(b[i]);
            ans.push_back(b[i+1]);
            i+=2;
        }
        else{
            ans.push_back(c[j-1]);
            j--;
        }
    }
    if(c.size()==0){
    if(b.size()==5){
        for(int i=b.size();i<n;i++){
            if(a[i]==0){
                cout<<0<<endl;
                return;
            }
        }
        ll prod=1;
        for(int i =0;i<5;i++){
            prod*=b[i];
        }
        cout<<prod<<endl;
        return;
    }
    }
    if(b.size()+c.size()<5){
        cout<<0<<endl;
        return;
    }
    // if(ans.size()==5){

    // }
    // if(ans.size()<5){
    //     cout<<0<<endl;
    //     return;
    // }
    ll prod=1;
    for(int i=0;i<ans.size();i++){
        prod*=ans[i];
    }
    // output(c);
    // cout<<endl;
    // output(b);
    // cout<<endl;
    // output(ans);
    // cout<<endl;
cout<<prod<<endl;    
    

  

    
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