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
    ll n,sum=0,u=0,cn1=0,cn2=0,cn3=0;
    cin>>n;
    v64 a;
    for(int i=0;i<n;i++){
        ll k;
        cin>>k;
        if(k==4){
            sum++;
            continue;
        }
        if(k==1){
            cn1++;
        }
        if(k==2){
            cn2++;
        }
        if(k==3){
            cn3++;
        }
        u+=k;
        a.push_back(k);
    }
    // cout<<cn1<<" "<<cn2<<" "<<cn3<<endl;
    if(cn3>=cn1){
        sum+=cn1;
        cn3=cn3-cn1;
        cn1=0;
    }
    else{
        sum+=cn3;
        cn1=cn1-cn3;
        cn3=0;
    }
sum+=cn2/2;
cn2=cn2%2;
if(cn2){
    if(cn1>=2){

    cn1-=2;
    }
    if(cn1==1){
        cn1--;
    }
    sum++;
    cn2--;
}

sum+=cn1/4;
if(cn1%4!=0){
    sum++;
    cout<<sum+cn3<<endl;
    return;
}

cout<<sum+cn3<<endl;

}
signed main()
{
    FAST ;
solve();
}