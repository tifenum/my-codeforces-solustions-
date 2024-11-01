#include <bits/stdc++.h>
#define ll long long 
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;

typedef vector<int> v32;
typedef vector<ll> v64;
const ll MOD = 1e9 + 7;

void solve() {
    int N = 10e5;
    ll t;
    cin >> t;

    vector<vector<int>> C(N+1, vector<int>(N+1, 0));
    for (int n = 0; n <= N; n++) {
        C[n][0] = 1;
        C[n][n] = 1;
        for (int k = 1; k < n; k++)
            C[n][k] = (C[n - 1][k] + C[n - 1][k - 1]) % MOD; 
    }

    v64 a(t), b(t);
    for (int i = 0; i < t; i++) cin >> a[i];
    for (int i = 0; i < t; i++) cin >> b[i];

    for (int i = 0; i < t; i++) {
        cout << C[a[i]][b[i]] << endl;
}
}
int main() {
    FAST;
    solve();
    return 0;
}
