    // when the boy said i'm going to be king someday everyone laughs exept the king..
    #include <bits/stdc++.h>
    #define ll long long 
    #define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
    using namespace std;
    typedef vector<int> v32;
    typedef vector<ll> v64;
    const double EPS = 0.00000001;
    const ll MOD = 1e9 + 7;
    #define INF 2e18
    #define fr(i,s,e) for(int i = s; i < e; i++)
    #define input(n,a) for(int i=0;i<n;i++) cin>>a[i]
    #define output(a) for(int i=0;i<a.size();i++) cout<<a[i]<<' ' 

    void solve() {
        ll n, c=0,k=0,sum = 0;
        cin >> n;
        v64 a(n);
        input(n,a);
        for(int j=0;j<64;j++){
            c=0;
            ll o=0;
            for(int i=0;i<n;i++){
                output(a);
                cout<<endl;
                cout<<"i :"<<i<<" j: "<<j<<" sum :"<<sum<<endl;
                if(a[i]==0){
                    c++;
                    if(o!=0){
                        sum++;
                    }
                    o=0;
                    continue;
                }
            if (((1LL << j) ^ a[i]) < a[i]) {
                a[i] ^= (1LL << j);
                    o++;
                    continue;
                }
            if (((1LL << j) ^ a[i]) > a[i] && o != 0) {
                sum++;
                o = 0;
                continue;
            }

            }
            if (o != 0) {
                sum++;

            }
            if(c==n){
                cout<<sum<<endl;
                return;
            }
        }
        cout << sum << endl;
    }

    signed main() {
        FAST;
        solve();
    }