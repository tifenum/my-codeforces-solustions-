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
    string s;
    cin>>s;
    ll sum=0;
    ll m=0;
    v64 v;
    int i=0;
    char k;
    vector<char> p;
    while(i<n-1){
        if(s[i]==k){
            continue;
        }
        if(s[i]==s[i+1]){
            k=s[i];
            p.push_back(s[i]);
            p.push_back(s[i+1]);
            i+=2;
        }
        else{
            p.push_back(s[i]);
            k=s[i];
            i++;
            sum+=1;
        }
        // cout<<"sum :"<<sum<<" char :"<<k<<endl;
    }
    // if(sum==3){
    // }
    // cout<<k<<endl;
output(p);   
cout<<endl; // while(s[j]==s[j+1] && j<n-1){
    //     j++;
    //     p+=s[j];
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
