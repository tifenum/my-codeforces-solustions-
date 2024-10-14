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
    string s,ans="",p="";
    cin>>s;
    ll a=0,j=0;
    vector<ll> t,u;
    for(int i=1;i<s.length();i++){
        if(s[i]==s[a]){
            a++;
            ans+=s[i];
        }
        else{
            ll b=i;
            while(a!=0 && s[b]!=s[a]){
                p+=s[b];
                b++;
            }
            t.push_back(i);
            u.push_back(a);
            a=0;
            ans="";
        }
    }
    if(a==1 || a==s.size()/2){
        cout<<"NO";
    }
    else{
        cout<<"YES"<<endl;
        cout<<ans+p<<endl;

    }
}
signed main()
{
    FAST ;
    solve();
}