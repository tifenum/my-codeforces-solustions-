// the moment of glory requires a lifetime of suffering
#include <bits/stdc++.h>
#define ll long long 
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;

void solve() {
    ll n, k;
    cin >> n >> k;
    ll s=0;
    if(k==1){
        cout<<n<<endl;
        return;
    }
    while (n > 0) {
        int digit = n % k;
        s+=digit;
        n /= k;
    }
    cout<<s<< endl;

}

int main() {
    FAST;
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

