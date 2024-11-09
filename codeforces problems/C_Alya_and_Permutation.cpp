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
unsigned countBits(long long number) 
{     
    if (number == 0) return 1; // Special case for 0
    return (int)log2(number) + 1; 
} 
void solve(){
    ll n;
    cin>>n;
    ll s=countBits(n);
    if(n==1){
        cout<<1<<endl;
        cout<<1<<endl;
        return;
    }
    if(n%2==1){
        cout<<n<<endl;
        for(int i=2;i<=n-2;i++){
            cout<<i<<" ";
        }
        cout<<1<<" ";
        cout<<n-1<<" ";
        cout<<n<<" ";
        cout<<endl;
        return;
    }
    if(n>=pow(2,s-1)+1){
        cout<<pow(2,s)-1<<endl;
            v64 a(2);
            a[0]=pow(2,s-1)-1;
            a[1]=pow(2,s-1);
            a[2]=pow(2,s-1)+1;
        for(int i=pow(2,s-1)+2;i<=n;i++){
            cout<<i<<" ";
        }
        for(int i=1;i<pow(2,s-1)-1;i++){
            cout<<i<<" ";
        }
        for(int i=0;i<=2;i++){
            cout<<a[2-i]<<" ";
        }
        cout<<endl;
        return;
    }
    else{
        s=s-1;
        n=n-1;
        cout<<pow(2,s+1)-1<<endl;
            v64 a(4);
            a[0]=pow(2,s-1)-1;
            a[1]=pow(2,s-1);
            a[2]=pow(2,s-1)+1;
        for(int i=pow(2,s-1)+2;i<n;i++){
            cout<<i<<" ";
        }
        for(int i=1;i<pow(2,s-1)-1;i++){
            cout<<i<<" ";
        }
        for(int i=0;i<=2;i++){
            cout<<a[2-i]<<" ";
        }
        cout<<n<<" ";
        cout<<n+1<<" ";
        cout<<endl;
        return;
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