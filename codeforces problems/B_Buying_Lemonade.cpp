#include <bits/stdc++.h>
#define ll long long 
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef vector<int> v32;
typedef vector<ll> v64;
const ll MOD = 1e9 + 7;
#define INF 2e18
#define fr(i,s,e) for(int i = s; i < e; i++)
#define input(n,a) for(int i=0;i<n;i++) cin>>a[i]
#define output(a) for(int i=0;i<a.size();i++) cout<<a[i]<<' ' 

void solve() {
   int n, x;
   cin >> n >> x;
   vector<int> a(n);
   for (int i = 0; i < n; i++) {
      cin >> a[i];
   }
   map<int, int> mp;
   for (int i = 0; i < n; i++) {
      mp[a[i]] += 1;
   }
   long long sum = 0, prev = 0;
   int extra = 0;
   for (auto it : mp) {
      sum += n * (it.first - prev);
      if (sum >= x) {
         break;
      }
      extra += it.second;
      n -= it.second;
      prev = it.first;
   }
   cout << x + extra << "\n";
}
signed main() {
    FAST;
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
}
