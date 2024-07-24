//the moment of glory requires a lifetime of suffering
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
    string n;
    cin>>n;
    ll a=n.size()-1,i=0;
    while (i<a)
    {    
        if(n[a-i]=='9'){
            cout<<"NO"<<endl;
            return;
        }
        else{
            i++;
            if(n[a-i]=='0' && a-i!=0){
                cout<<"NO"<<endl;
                return;
            }
            else{
                n[a-i]--;
            }
        }
    }
    if(n[0]=='0'){

    cout<<"YES"<<endl;
    }
    else{cout<<"NO"<<endl;}
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