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
 
void solve() {
    int books, totalPrice;
    cin >> books >> totalPrice;
    vector<int> priceOfBook(books);
    vector<int> pagesOfBook (books);
    for(int i=0; i < books; i++) cin >> priceOfBook[i];
    for(int i=0; i < books; i++) cin>> pagesOfBook[i];
    vector<vector<int>> maxPages(books+1,vector<int>(totalPrice+1,0));
    for(int i=0; i < books; i++)
    for(int price=0; price<=totalPrice; price++)
    {
        maxPages[i+1] [price]= maxPages[i][price];
        if (price>=priceOfBook[i])
            maxPages[i+1][price]=max(maxPages[i+1][price],pagesOfBook[i]+maxPages[i][price-priceOfBook[i]]);
    }
    cout << maxPages [books] [totalPrice];
}

// void solve(){
// int n,x;
// cin>>n>>x;
// v32 a(n),b(n);
// for(int i=0;i<n;i++){
//     cin>>a[i];
// }
// for(int i=0;i<n;i++){
//     cin>>b[i];
// }
// vector<vector<int>> dp(n, vector<int>(x + 1, 0));
// for(int i=0;i<n;i++){
//     for(int j=0;j<=x;j++){
//         if(j>=a[i]){

//         dp[i]=max(dp[i-1][j],b[i]+dp[i-1][j-a[i]]);
//         }
//     }
// }
// cout<<dp[n-1][x]<<endl;
// }
int main()
{
solve();
}  