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
            ll n,k;
            cin>>n>>k;
            v64 a(n);
            input(n,a);
            ll A=0,B=0;     
            bool s=true;
            sort(a.begin(),a.end());
            for(int i=n-1;i>=0;i--){
                if(s){
                    A+=a[i];
                    s=!s;
                    if(i!=0 && k!=0){
                        ll b=a[i]-a[i-1];
                        if(k>=b){
                            a[i-1]=a[i];
                            k-=b;
                        }
                        else{
                            a[i-1]+=k;
                            k=0;
                        }
                    }
                }
                else{
                    B+=a[i];
                    s=!s;
                }
            }
            cout<<A-B<<endl;
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