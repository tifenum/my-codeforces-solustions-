#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> v64;
#define forn(i, e) for (ll i = 0; i < e; i++)
#define ln "\n"
#define pb push_back

bool check(ll n, v64 a) {
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++) {
        if (i != a[i]) {
            return false;
        }
    }
    return true;
}


// bool check(ll n, v64 a) {
//     ll sum=0;
//         ll sum2=0;

//     for (int i = 1; i <= n; i++)

//     {   sum=sum+i;
        
        
// }
// for (int i = 0; i < a.size(); i++)

//     {   sum2=sum2+a[i];
        
        
// }
// if(sum==sum2)return true;
// else return false;
    
   
// }

void solve() {
    ll n;
    cin >> n;
    v64 a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    map<ll, ll> g;
    v64 y;
    for (int i = 0; i < n; i++) {
        g[a[i]]++;
        if (g[a[i]] == 2) {
            if (!check(y.size(), y)) {
                cout << "NO" << ln;
                return;
            } else {
                y.clear();
                g.clear();
                g[a[i]]++;
                y.push_back(a[i]);
            }
        }
        y.pb(a[i]);
    }
    cout << "YES" << ln;
// ll n;
//     cin >> n;
//     v64 a(n),b;
//     set<ll> ff;
//     for (int i = 0; i < n; i++) {
//         cin >> a[i];
//     }
//     ll sublen=0;
//     for (int i = 0; i < a.size()-1; i++)
//     {   ff.insert(a[i]);
//         if(ff.size()!=sublen){
//         if(!check(b.size(),a)){
//             cout<<"NO"<<endl;
//             return;
//         }
//         else{
//             ff.empty();
//             b.clear();
//             ff.insert(a[i]);
//             b.push_back(a[i]);
//         sublen=1;
//         }
//     }
//     else{
//         b.push_back(a[i]);
//         sublen++;
//     }
        

//     }
//     cout<<"YES"<<endl;

}

int main() {
solve();
}
