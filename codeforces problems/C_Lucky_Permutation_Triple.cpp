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
    cin>>n;
    if(n%2==0){
        cout<<-1<<endl;
        return;
    }
    vector<vector<int>> a(3, vector<int>(n, 0));
    for(int i = 0; i < n; i++){
        a[0][i] = i;
    }
        a[1][0] = n-1;
    for(int i = 0; i < n-1; i++){
        a[1][i+1] = i;
    }
    a[1][n-1] = n-2;
    for(int i=0;i<n;i++){
        a[2][i]=(a[0][i]+a[1][i])%n;
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<' ';
        }
        cout<<endl;
    }

}
signed main()
{
    FAST ;
    ll t;
solve();
}