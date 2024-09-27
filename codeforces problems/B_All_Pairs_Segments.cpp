// the moment of glory requires a lifetime of suffering
#include <bits/stdc++.h>
#define ll long long 
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;

typedef vector<int> v32;
typedef vector<ll> v64;

#define input(n, a) for(int i = 0; i < n; i++) cin >> a[i]
#define output(a) for(int i = 0; i < a.size(); i++) cout << a[i] << ' '

// Function to calculate all segments and the number of segments passing through them
void solve() {
    ll n, q;
    cin >> n >> q;

    vector<ll> X(n), query(q);
    input(n, X);  // Input the points
    input(q, query);  // Input the queries

    // Count of segments passing through each point
    vector<ll> point_count(n, 0);

    // Generate all pairs of points (i, j) where i < j
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            // The segment is [X[i], X[j]]
            ll segment_count = (i + 1) * (n - j);  // Segments passing through [i, j]

            // Assign counts based on the position of points
            if (i == 0 || i == n - 1) { // Edge cases for X[i]
                point_count[i] += segment_count + 1;  // Edge point not in the vector
            } else {
                point_count[i] += segment_count;  // Regular edge
            }
            if (j == 0 || j == n - 1) { // Edge cases for X[j]
                point_count[j] += segment_count + 1;  // Edge point not in the vector
            } else {
                point_count[j] += segment_count;  // Regular edge
            }
        }
    }

    // Count occurrences of each segment count
    map<ll, ll> segmentCount;
    for (ll c : point_count) {
        segmentCount[c]++;
    }

    // Output results for each query
    for (ll k : query) {
        cout << segmentCount[k] << ' ';
    }
    cout << endl;  // New line for the end of each test case output
}

signed main() {
    FAST;
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
}
