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
 

ll solve(int idx, v64 arr, ll sum1, ll sum2, ll N)
{
    // If we have reached the end, return the difference
    // between the sums
    if (idx == N) {
        return abs(sum1 - sum2);
    }

    // Choose the current apple in group 1
    ll choose
        = solve(idx + 1, arr, sum1 + arr[idx], sum2, N);

    // Choose the current apple in group 2
    ll notChoose
        = solve(idx + 1, arr, sum1, sum2 + arr[idx], N);

    // Return the minimum of both the choices
    return min(choose, notChoose);
}
int main()
{
    ll n;
    cin>>n;
    v64 a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    ll ans =solve(0,a,0,0,n);
    cout<<ans<<endl;}