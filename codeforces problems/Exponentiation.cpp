// // when the boy said i'm going to be king someday everyone laughs exept the king..
// #include <bits/stdc++.h>
// #define ll long long 
// #define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
// using namespace std;
// typedef vector<int> v32;
// typedef vector<ll> v64;
// const double EPS = 0.00000001;
// const ll MOD = 1e9 + 7;
// #define INF 2e18
// #define fr(i,s,e) for(int i = s; i < e; i++)
// #define input(n,a) for(int i=0;i<n;i++) cin>>a[i]
// #define output(a) for(int i=0;i<a.size();i++) cout<<a[i]<<' ' 
// ll power(ll A, ll B)
// {
//     if (B == 0)
//         return 1;

//     ll res = power(A, B / 2);

//     if (B % 2)
//         return res * res * A;
//     else
//         return res * res;
// }
// void solve(){
//     ll n,m;
//     cin>>n>>m;
//     cout<<power(n,m)%MOD<<endl;
// }
// signed main()
// {
//     FAST ;
//     ll t;
//     cin>>t;
//     while(t--){
//         solve();
//     }
// }
#include <iostream>
#include <vector>
using namespace std;

typedef long long ll;
const ll MOD = 1e9 + 7;

ll power(ll base, ll exp) {
    ll result = 1;
    while (exp > 0) {
        if (exp & 1) // if exp is odd
            result = (result * base) % MOD;
        base = (base * base) % MOD;
        exp >>= 1; // equivalent to exp /= 2
    }
    return result;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        ll n, m;
        cin >> n >> m;
        ll result = power(n, m);
        cout << result << endl;
    }

    return 0;
}
