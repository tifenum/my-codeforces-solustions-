// the moment of glory requires a lifetime of suffering
#include <bits/stdc++.h>
#define ll long long 
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;

typedef vector<int> v32;
typedef vector<ll> v64;

#define input(n, a) for(int i = 1; i <= n; i++) cin >> a[i]
#define output(a) for(int i = 0; i < a.size(); i++) cout << a[i] << ' '

void solve() {
    ll n, q,i,b;
    cin >> n >> q;
    vector<ll> a(n+1),query(q);
    a[0]=0;
    input(n,a);
    map<ll,ll> m;
	for(i=0;i<n;i++){
		m[i*(n-i)]+=a[i+1]-a[i]-1;
		m[i*(n-i-1)+n-1]+=1;
	}
		for(i=0;i<q;i++){
			cin>>b;
			cout<<m[b]<<' ';
		}
		cout<<'\n';
}

signed main() {
    FAST;
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
}
