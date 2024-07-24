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
    ll n;
    string s;
    cin>>n;
    cin>>s;
    v64 a;
    for(int i=0;i<n;i++){
        if(s[i]=='4'){
            a.push_back(3);
            a.push_back(2);
            a.push_back(2);
            continue;
        }
        if(s[i]=='8'){
            a.push_back(7);
            a.push_back(2);
            a.push_back(2);
            a.push_back(2);

            continue;
        }
        if(s[i]=='6'){
            a.push_back(5);
            a.push_back(3);
            continue;
        }
        if(s[i]=='9'){
            a.push_back(7);
            a.push_back(3);
            a.push_back(3);
            a.push_back(2);
            continue;
        }
        if(s[i]=='1' || s[i]=='0'){
            continue;
        }
        a.push_back(s[i]-'0');
        // cout<<s[i]-'0'<<endl;
    }
    sort(a.begin(),a.end());
    for(int i=a.size()-1;i>=0;i--){
        cout<<a[i];
    }
// output(a);
}
signed main()
{
    FAST ;
solve();
}