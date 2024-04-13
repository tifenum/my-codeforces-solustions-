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
    void solve(){
        ll n,k,sum=0;
        cin>>n>>k;
        v64 a(n);
        input(n,a);
        int i=0,j=n-1;
        // cout<<k/2<<endl;
    while (i <= j && k > 0) {
        cout<<a[i]<<" "<<a[j]<<endl;
        if(i==j){
            if(k>=a[i]){
                sum++;
                a[i]=0;
            }
            break;
        }
        if(a[i]<a[j] && k>=2*a[i]+1){
            a[j]-=a[i];
            k-=2*a[i];
            a[i]=0;
            i++;
            sum++;
            continue;
        }
        if(a[i]>a[j] && k>=2*a[j]){
            a[i]-=a[j];
            k-=2*a[j];
            a[j]=0;
            j--;
            sum++;
            continue;
        }
        if(a[i]==a[j]){
            if(k>=a[i]+a[j]){
            sum+=2;
            k-=a[i]+a[j];
            a[i]=0;
            a[j]=0;
            i++;
            j--;
            continue;
            }
            if((k)>=2*a[i]){
                k-=2*a[i];
                sum++;
                a[i]=0;
                i++;
            }
        }
        if((k/2)<min(a[i],a[j])){
            break;
        }
    }
    cout<<sum<<endl;
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