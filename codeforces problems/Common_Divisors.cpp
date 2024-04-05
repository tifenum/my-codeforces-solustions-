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

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n;
    cin>>n;
    ll x[n];
    ll cnt[1000001]={};
    for(int i=0;i<n;i++)
    {
        cin>>x[i];
        cnt[x[i]]++;
    }
    for(int i=1000000;i>=1;i--)
    {
        ll d=0;
        for(int j=i;j<=1000000;j+=i) d+=cnt[j];
        if(d>=2)
        {
            cout<<i;
            return 0;
        }
    }
}