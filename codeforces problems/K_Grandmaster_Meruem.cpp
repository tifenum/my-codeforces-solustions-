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
    ll n,k,num,sum=0;
    cin>>n>>k;
    for (int i = 0; i < n; i++)
    {
        cin>>num;
        sum+=num;
    }
    while (sum<=100*n&& k!=0)
    {
        sum++;
        k--;
    }
        
    if (sum<=100*n)
    {
cout<<sum/10<<endl;    }else{
    cout<<(100*n)/10<<endl;
}
    
    
}
signed main()
{
    FAST ;
    ll t;
    solve();
}