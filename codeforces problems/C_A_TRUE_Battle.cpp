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
// void solve(){
    // ll n;
    // cin>>n;
    // string a;
    // cin>>a;
    // bool alice=false;
    // bool last=true;
    // if(a[0]=='1'){
    //     cout<<"YES"<<endl;
    //     return ;
    // }
    // if(n%2==0){
    //         if(a[n-1] =='1' || a[n-2]=='1'){
    //             last=true;
    //         }
    //         else{
    //             last=false;
    //         }
    //     alice=false;            
    //         }
    //     else{
    //         if(a[n-1] =='0' || a[n-2]=='0'){
    //             last=false;
    //         }
    //         else{
    //             last=true;
    //         } 
    //     alice=true;            
    //     }
    // for(int i=n-3;i>=0;i--){
    //     if(alice){
    //         if(a[i]== '1' || last){
    //             last=true;
    //         }
    //         else{
    //             last=false;
    //         }
    //     alice=!alice;            
    //     }
    //     else{
    //         if(a[i] =='0' || !last){
    //             last=false;
    //         }
    //         else{
    //             last=true;
    //         } 
    //     alice=!alice;            
    //     }
    // }
    // if(last){
    //     cout<<"YES"<<endl;
    // }
    // else{
    //     cout<<"NO"<<endl;
    // }
    //     }
    void solve() {
    ll n;
    cin >> n;
    string a;
    cin >> a;
    if (a[0] == '1' || a[n - 1] == '1') {
        cout << "YES" << endl;
        return;
    }

    for (int i = 0; i < n - 1; ++i) {
        if (a[i] == '1' && a[i + 1] == '1') {
            cout << "YES" << endl;
            return;
        }
    }

    cout << "NO" << endl;
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