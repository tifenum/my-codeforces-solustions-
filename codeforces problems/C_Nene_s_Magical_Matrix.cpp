// when the boy said i'm going to be king someday everyone laughs exept the king..
#include <bits/stdc++.h>
#define ll long long 
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef vector<int> v32;
typedef vector<ll> v64;
const double EPS = 0.00000001;
const ll MOD = 1e9 + 7;
#define INF 2e18
#define fr(i,s,e) for(int i = s; i < e; i++)
#define input(n,a) for(int i=0;i<n;i++) cin>>a[i]
#define output(a) for(int i=0;i<a.size();i++) cout<<a[i]<<' ' 
void solve(){
    ll n,sum=0;
    cin>>n;
    vector<vector<ll>> a(n,vector<ll>(n,0));
    vector<vector<ll>> b;
    vector<vector<ll>> v;

    v64 d;
    for(int i=1;i<=n;i++){
        d.push_back(i);
    }
    for(int i=0;i<n;i++){
        a[i]=d;
        b.push_back({1,i+1});
    }
    for(int i=n/2-1;i>=0;i--){
        for(int j=0;j<n;j++){
            a[j][i]=d[j];
        }
        a[i]=d;
        v.push_back({2,i+1});
    }  
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            sum+=a[i][j];
        }
    }
    string result;
    for (int i = 1; i <= n; ++i) {
        result += std::to_string(i) + " ";
    }
    cout<<sum<<" "<<b.size()+v.size()<<endl;
    for(int i=0;i<b.size();i++){
        cout<<b[i][0]<<" "<<b[i][1]<<" "<<result<<endl;
    }
    reverse(v.begin(),v.end());
for(int j = 0; j < v.size(); j++) {
    cout << v[j][0] << " " << v[j][1] << " " << result << endl;
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