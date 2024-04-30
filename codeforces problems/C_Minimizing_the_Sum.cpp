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

void solve() {
    ll n, k, sum = 0;
    cin >> n >> k;
    v64 a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    ll mx, pos, pol;
    int i = 0;
    if(n == 1) {
        cout << sum << endl;
        return;
    }
    while (i < k) {
        mx = -1;
        for (int j = 0; j < n - 1; j++) {
            if (a[j] - a[j + 1] > mx) {
                mx = a[j] - a[j + 1];
                pos = j + 1;
                pol = j;
            }
            if (a[j + 1] - a[j] > mx) {
                mx = a[j + 1] - a[j];
                pol = j + 1;
                pos = j;
            }
        }
        if (mx == 0) {
            cout << sum << endl;
            return;
        }
        sum -= mx;
        a[pol] = a[pos];
        i++;
    }
    cout << sum << endl;
}

signed main() {
    FAST ;
    ll t;
    cin >> t;
    while(t--) {
        solve();
    }
}
