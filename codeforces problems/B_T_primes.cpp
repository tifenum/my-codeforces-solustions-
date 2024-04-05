// #include <iostream>
// #include <set>

// using namespace std;

// const int sqrt_lim = 1000001;

// set<long long> prime_squares()
// {
//     static bool arr[sqrt_lim];

//     for (int i = 2; i*i < sqrt_lim; i++)
//     {
//         if (!arr[i])
//         {
//             for (int j = i*i; j < sqrt_lim; j += i)
//             {
//                 arr[j] = true;
//             }
//         }
//     }

//     set<long long> res;
//     for (int i = 2; i < sqrt_lim; i++)
//     {
//         if (!arr[i])
//             res.insert((long long)i * i);
//     }
//     return res;
// }

// int main()
// {
//     ios_base::sync_with_stdio(false); cin.tie(NULL);

//     set<long long> sq(prime_squares());

//     int n; cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         long long x; cin >> x;

//         if (sq.find(x) != sq.end())
//         {
//             cout << "YES\n";
//         }
//         else
//         {
//             cout << "NO\n";
//         }
//     }
// }
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
}
signed main()
{
    FAST ;
    ll t;
    set<ll> b;
    vector<bool> z(1000001,false);
    for(int i=2;i*i<1000001;i++){
        if(!z[i]){
        for(int j=i*i; j<1000001;j+=i){
            z[j]=true;
        }            
        }
    }
    for(int i=2;i<1000001;i++){
        if(!z[i]){

        b.insert((ll)i*i);
        }
    }
    cin>>t;
    for(int i=0;i<t;i++){
        ll k;
        cin>>k;
        if(b.find(k)!= b.end()){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

}
