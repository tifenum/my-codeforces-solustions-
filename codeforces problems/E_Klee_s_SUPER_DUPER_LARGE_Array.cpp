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

// Function to evaluate the given expression
ll expression(ll mid, ll n, ll k) {
    return mid * k + mid - (n - mid) * k + (n - mid) - 1;
}

void solve() {
    ll n, k;
    cin >> n >> k;

    ll low = 0;
    ll high = n - 1;
    ll result = LONG_LONG_MAX;  // Store the minimum absolute value

    while (low <= high) {
        ll mid = low + (high - low) / 2;
        
        // Evaluate the expression for the current mid
        ll current_value = abs(expression(mid, n, k));
        
        // Check if the absolute value is minimized
        if (abs(current_value) < abs(result)) {
            result = current_value;  // Update result if we get a smaller absolute value
        }
        
        // Move towards the region where we expect to minimize the absolute value
        if (current_value < 0) {
            low = mid + 1;  // The result is negative, we need a larger mid
        } else {
            high = mid - 1;  // The result is positive, we need a smaller mid
        }
    }

    // Output the minimum result
    cout << result << endl;
}

signed main() {
    FAST;
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
}
