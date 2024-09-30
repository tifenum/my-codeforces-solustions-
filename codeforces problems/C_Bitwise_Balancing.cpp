#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    ll b, c, d;
    cin >> b >> c >> d;

    ll a = 0;
    for (int i = 0; i < 61; i++) {
        // Extract the i-th bit from b, c, and d
        ll bit_b = (b >> i) & 1;
        ll bit_c = (c >> i) & 1;
        ll bit_d = (d >> i) & 1;

        // Calculate the resulting bit for a
        if (bit_d == 1) {
            // If bit_d is 1, we need to ensure (a|b) has a 1 and (a&c) has a 0
            if (bit_c == 1) {
                cout << -1 << endl; // Impossible to satisfy
                return;
            }
            // Set a's bit to 1 if bit_b is 0
            a |= (bit_b == 0) ? (1LL << i) : 0; 
        } else {
            // If bit_d is 0, we can have the following scenarios:
            if (bit_c == 1) {
                // (a&c) must be 1, so we have to set a's bit to 1
                a |= (1LL << i);
            } else {
                // Both c and d are 0 at this bit position
                // No restrictions, a's bit can remain 0
            }
        }
    }

    // Check if a is within the valid range
    if (a <= (1LL << 61)) {
        cout << a << endl;
    } else {
        cout << -1 << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
