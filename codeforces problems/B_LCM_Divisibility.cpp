    // when the boy said i'm going to be king someday everyone laughs exept the king..
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
        int n,m,k;
        cin>>n>>m>>k;
    vector<vector<pair<ll,ll>>> grid(n, vector<pair<ll,ll>>(m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>grid[i][j].first;
            }
        }
        vector<vector<int>> dp(n,vector<int>(m,0));
    ll l=1;
    dp[0][0]=1;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                // if (lcm(l,grid[i][j])%k!=0) continue;
                if (i-1 >= 0 && lcm(grid[i][j].first,grid[i-1][j].second)%k == 0) {
                    grid[i][j].second = lcm(grid[i][j].first,grid[i-1][j].second)%1000000007;
                    dp[i][j] = (dp[i][j]+dp[i - 1][j])%1000000007;
                }
                if (j-1 >= 0 && lcm(grid[i][j - 1].second,grid[i][j].first)%k == 0) {
                    grid[i][j].second=lcm(grid[i][j - 1].second,grid[i][j].first)%1000000007;
                    dp[i][j] = (dp[i][j]+dp[i][j - 1])%1000000007;
                }
            }
    }
    cout<<"yhd"<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;


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