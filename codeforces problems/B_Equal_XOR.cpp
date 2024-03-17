#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>  
#include <complex>
#include <queue>
#include <set>
#include <unordered_set>
#include <list>
#include <chrono>
#include <random>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <stack>
#include <iomanip>
#include <fstream>
 
using namespace std;
 
typedef long long ll;
typedef long double ld;
typedef pair<int,int> p32;
typedef pair<ll,ll> p64;
typedef pair<double,double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int> > vv32;
typedef vector<vector<ll> > vv64;
typedef vector<vector<p64> > vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
ll MOD = 998244353;
double eps = 1e-12;
#define forn(i,e) for(ll i = 0; i < e; i++)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
void affiche(v64 a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void solve(){
    ll n,k;
    cin>>n>>
}
// void solve(){
//     ll n, k, twos = 0;
//     cin >> n >> k;
//     k *= 2;
//     v64 a(n), b(n), a1, b1;
//     map<ll, ll> aa, bb;
//     for(int i = 0; i < n; i++){
//         cin >> a[i];
//         aa[a[i]]++;
//         if(aa[a[i]] == 2){
//             twos++;
//         }
//     }
//     for(int i = 0; i < n; i++){
//         cin >> b[i];
//         bb[b[i]]++;
//     }
//     ll k1 = k, k2 = k;
//     ll i = 0,two=0,two1=0;
//     while(i < n && k1 >= 1){
//         if((aa[a[i]] == 2) && k1+two-2 >= 0){
//             a1.push_back(a[i]);
//             aa[a[i]]=3;
//             i++;
//             two-=2;
//             continue;
//         }
//         if(aa[a[i]]==3){
//             a1.push_back(a[i]);
//             k1 = k1 - 2;
//         }
//         i++;
//     }
//     i = 0;
//     while(i <n && k2 >= 1){
//         if(bb[b[i]] == 2 && k2+two1-2 >= 0){
//             b1.push_back(b[i]);
//             bb[b[i]]=3;
//             i++;
//             two1-=2;
//             continue;
//         }
//         if(bb[b[i]]==3){
//             b1.push_back(b[i]);
//             k2 = k2 - 2;
//         }
//         i++;
//     }
//     k = k1;
//     i = 0;
//     if(k2 != 0 && k1 != 0){
//         while(i <n ){
//             if(aa[a[i]] == 1){
//                 a1.push_back(a[i]);
//                 b1.push_back(a[i]);
//                 k--;
//             }
//             if(k == 0){
//                 break;
//             }
//             i++;
//         }
//     }
//     affiche(a1);
//     affiche(b1);
// }
// void solve(){
//     ll n,k,twos=0;
//     cin>>n>>k;
//     k*=2;
//     v64 a(n),b(n),a1,b1;
//     map<ll,ll> aa,bb;
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//         aa[a[i]]++;
//         if(aa[a[i]]==2){
//             twos++;
//         }
//     }
//     for(int i=0;i<n;i++){
//         cin>>b[i];
//         bb[b[i]]++;
//     }
//     ll k1=k,k2=k;
//     ll i=n-1;
//     while(i>=0 && k1>=1){
//         if(aa[a[i]]==2 && k1!=0){
//             a1.push_back(a[i]);
//             a1.push_back(a[i]);
//             k1=k1-2;
//         }
//         i--;
//     }
//     i=n-1;
//     while(i>=0 && k2>=1){
//         // if(aa[a[i]]==2 && k2!=0){
//         //     a1.push_back(a[i]);
//         //     a1.push_back(a[i]);
//         //     k1=k1-2;
//         // }
//         if(bb[b[i]]==0 && k2!=0){
//             b1.push_back(b[i]);
//             b1.push_back(b[i]);
//             k2=k2-2;
//         }
//         // if(k1==1 && k2==1){
//         //     break;
//         // }
//         // if(k1==0 && k2==0 ){
//         //     affiche(a1);
//         //     affiche(b1);
//         //     return;
//         // }
//         // i--;
//     }
//     k=k1;
//     i=n-1;
//     if(k!=0){
//     while(i>=0){
//         if(aa[a[i]]==1){
//         a1.push_back(a[i]);
//         b1.push_back(a[i]);
//         k--;}
//         if(k==0){
//             affiche(a1);
//             affiche(b1);
//             return;
//         }
//         i--;
//     }
//     }
//     affiche(a1);
//     affiche(b1);
// }
int main()
{
    fast_cin();
    ll t;
    cin >> t;
    for(int it=1;it<=t;it++) {
        solve();
    }
    return 0;
}