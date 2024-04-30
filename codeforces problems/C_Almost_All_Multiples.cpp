// when the boy said i'm going to be king someday everyone laughs exept the king..
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
// void solve(){
//     ll n,x;
//     cin>>n>>x;
//     v64 a(n,0);
//     if(n%x!=0){
//         cout<<-1<<endl;
//         return;
//     }
//     a[0]=x;
//     int j=1;
//     for(int i=1;i<n-1;i++){
//         if(i+1==x*j){
//             a[i]=x*(j+1);
//             j++;
//             x=x*(j+1)
//         }
//         else{
//              a[i]=i+1;
//         }
//     }
//     a[n-1]=1;
//     output(a);
//     cout<<endl;
// }
void solve() {
    int n, x;
    cin >> n >> x;
    if (n % x) {
        cout << "-1\n";
        return;
    }
    vector<int> ans(n + 1);
    iota(ans.begin(), ans.end(), 0);
    ans[n] = 1;
    ans[1] = x;
    while (x < n)
        for (int i = x * 2; i <= n; i += x)
            if (n % i == 0) {
                ans[x] = i;
                x = i;
                break;
            }
    for (int i = 1; i <= n; ++i)
        cout << ans[i] << " ";
    cout << "\n";
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
