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
bool isPerfectSquare(long long x)
{
    // Find floating point value of
    // square root of x.
    if (x >= 0) {

        long long sr = sqrt(x);
        
        // if product of square root 
        //is equal, then
        // return T/F
        return (sr * sr == x);
    }
    // else return false if n<0
    return false;
}

void solve(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    if(isPerfectSquare(n)){
        if(n>4){
            ll u=0;
            for(int i =0 ;i<n;i++){
                if(s[i]=='0'){
                    u++;
                }
            }
            ll o=sqrt(n);
            o=(o-1)*4;
            if(u==0 || u != n-o){
                cout<<"No"<<endl;
                return;
            }
        }
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
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