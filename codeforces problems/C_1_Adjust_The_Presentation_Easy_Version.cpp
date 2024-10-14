        //the moment of glory requires a lifetime of suffering
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
        void solve(){
            ll n,m,q;
            cin>>n>>m>>q;
            v64 a(n),b(m);
            input(n,a);
            input(m,b);
            ll v=0; 
            map<ll,ll> y;
            for(int i=0;i<m-1;i++){
                if(b[i]==a[v] && b[i+1]!=a[v]){
                    v++;
                    y[b[i]]++;
                    if(v==n){
                        cout<<"YA"<<endl;
                        return;
                    }
                    continue;
                }
                if(b[i]!=a[v] && !(y.find(b[i]) != y.end())){
                cout<<"TIDAK"<<endl;
                return ;
                }    
            }
            if(b[m-1]!=a[v] && !(y.find(b[m-1]) != y.end())){
                cout<<"TIDAK"<<endl;    
                return ;
                }  
            cout<<"YA"<<endl;
        }
        signed main()
        {
            FAST ;
            ll t;
            cin>>t;
            while(t--){
                solve();
            }
        }   