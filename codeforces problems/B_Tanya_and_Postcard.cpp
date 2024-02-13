    #include <bits/stdc++.h>
  
    using namespace std;
x    typedef long long ll;
    #define rep(i, a, b) for (ll i = a; i < b; i++)
    #define all(x) x.begin(),x.end()  
    #define allr(x) x.rbegin(),x.rend() 
    #define print(a) for(auto e:a) cout<<e<<" ";cout<<endl; 
    #define yes cout<<"YES"<<"\n"
    #define no cout<<"NO"<<"\n"
    #define s second  
    #define f first
    #define pb push_back
    #define sz(a) a.size()
    const ll MOD = 1000000007;
    ll p = 1e9 + 7;
    ll power(ll a, ll b)
    {
        ll result = 1;
        while (b > 0)
        {
            if (b % 2 == 1)
                result = ((result % p) * (a % p)) % p;
            a = ((a % p) * (a % p)) % p;
            b /= 2;
        }
        return result;
    }
    string to_bin(ll n)
    {
        string ch = "";
        ll i = 0;
        while (n > 0)
        {
            char a = n % 2 + '0';
            ch = a + ch;
            n = n / 2;
            i++;
        }
        return ch;
    }
    ll to_dec(string ch)
    {
        ll res = 0;
        for (ll i = ch.size() - 1; i >= 0; i--)
        {
            ll a = ch[i] - '0';
            ll p = ch.size() - i - 1;
            if (a)
                res += power(2, p);
        }
        return res;
    }
    bool palindrom(string s)
    {
        for (ll i = 0; i < s.size() / 2; i++)
        {
            if (s[i] != s[s.size() - 1 - i])
            {
                return false;
            }
        }
        return true;
    }
     
    bool prime(long long n)
    {
        if (n <= 1)
            return false;
        for (int i = 2; i <= sqrt(n); i++)
            if (n % i == 0)
                return false;
        return true;
    }
    ll d_min(ll hh1, ll mm1, ll hh2, ll mm2)
    {
        ll MINS_PER_HR = 60, MINS_PER_DAY = 1440;
        ll startx, endx, duration;
     
        startx = hh1 * MINS_PER_HR + mm1;
        endx = hh2 * MINS_PER_HR + mm2;
        duration = endx - startx;
        if (duration < 0)
            duration = duration + MINS_PER_DAY;
        return duration;
    }
    ll cal(vector<ll> &v)
    {
        ll n, ones = 0, zeros = 0, ans = 0;
        rep(i, 0, v.size())
        {
            if (v[i])
                ones++;
            else
                ans += ones;
        }
        return ans;
    }
     
    ll inverse(ll a, ll b)
    {
        return ((a % p) * (power(b, p - 2) % p)) % p;
    }
     
    ll fac(ll n)
    {
        ll ans=1;
        if(n<1)return 1;
        else{
            rep(i,1,n+1){
                i%=p;
                ans%=p;
                ans=(ans*i)%p;
            }
        }
        return ans%p;
    }
    bool verif(string ch){
        bool t0=false,t9=false;
        rep(i,0,sz(ch)){
            if(ch[i]=='0')t0=true;
            if(ch[i]=='9')t9=true;
        }
        return t0&&t9;  
    }
    void inv(string ch,int s,int e){
       if(s>=e){
        return ;
       }
       else{
        char c=ch[e];
        ch[e]=ch[s];
        ch[s]=c;
        return inv(ch,s+1,e-1);
       }
     
    }
    bool test(ll n ,ll m){
        if(n==m)return true;
        else if(n%3!=0) return false;
        else return(test(n/3,m)||test((2*n)/3,m));
    }
    
    ll ab(ll x1,ll y1,ll x2,ll y2){
        return(sqrt(pow((x1-x2),2)+pow((y1-y2),2)));
    }
    void solve()
    {
      string s,t;
      ll yy=0,oo=0;
      cin>>s>>t;
      map<char,ll>m;
      rep(i,0,sz(t)){
        m[t[i]]++;
      }
      rep(i,0,sz(s)){
        if(m[s[i]]!=0){
            yy++;
            m[s[i]]--;
            s[i]='!';
        }
      
      }
      rep(i,0,sz(s)){
       
         if(s[i]>='a'&&s[i]<='z'&&s[i]!='!'){
           if(m[s[i]-'a'+'A']!=0){
            oo++;
            m[s[i]-'a'+'A']--;
           }
        }
        else if(s[i]>='A'&&s[i]<='Z'&&s[i]!='!'){
             if(m[s[i]-'A'+'a']!=0){
            oo++;
            m[s[i]-'A'+'a']--;
           }
        }
      }
      cout<<yy<<" "<<oo<<endl;
     
    }


           
    int main()
    {
    #ifndef ONLINE_JUDGE
        clock_t tStart = clock();
        freopen("input.txt", "r", stdin);
       freopen("output.txt", "w", stdout);
    #endif
        ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        int t = 1, i = 1;   
        
        while (t--)
        {
            solve();
    
        }
     
    #ifndef ONLINE_JUDGE
        cerr << fixed << setprecision(3) << "\nTime Taken: " << ((double)(clock() - tStart) / CLOCKS_PER_SEC) << "s" << endl;
    #endif
    }
