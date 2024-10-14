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
        ll l,r,L,R;
        cin>>l>>r;
        cin>>L>>R;
        if(R==r && l==L){
            cout<<R-L<<endl;
            return ;
        }
        if(R<l || L>r){
            cout<<1<<endl;
            return ;
        }
        else if(L<=l && R>=r){
            if(L==l || R==r){
                cout<<r-l+1<<endl;
                return;
            }
            cout<<r-l+2<<endl;
            return ;
        }
        else if(l<=L && r>=R){
                if(L==l || R==r){
            cout<<R-L+1<<endl;
                return;
            }
            cout<<R-L+2<<endl;

                return ;
        }
        else if(L<=l && R<=r){
            if(L==l || R==r){
            cout<<R-l+1<<endl;
                return;
            }
            cout<<R-l+2<<endl;
            return ;

        }
        else{
            if(L==l || R==r){
            cout<<r-L+1<<endl;
                return;
            }
            cout<<r-L+2<<endl;
        }
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