// #include <bits/stdc++.h>
// using namespace std;


// int n, m;
// vector<vector<int>>adj(MAXN);
// vector<bool>visited(MAXN, false);
// vector<int>bridges;

// void DFS (int node) {
//   visited[node] = true;
//   for (auto child : adj[node]) {
//     if (visited[child] == false) {
//       DFS(child);
//     }
//   }
// }

// int main() {
//     cin >> n >> m;
//     for (int i = 0 ; i < m; i++) {
//       int node1, node2;
//       cin >> node1 >> node2;
//       adj[node1].push_back(node2);
//       adj[node2].push_back(node1);
//     }
//     for (int i = 1; i <= n; i++) {
//       if (visited[i] == false) {
//         bridges.push_back(i);
//         DFS(i);
//       }
//     }
//     cout << bridges.size() - 1 << endl;
//     for (int i = 0; i < bridges.size() - 1; i++) {
//       cout << bridges[i] << " " << bridges[i + 1] << endl;
//     }
//     return 0;
// }
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
#define MAXN 202020
vector<vector<int>> graph(MAXN);
vector<bool>visited(MAXN, false);
vector<int> bridges; 

void DFS(int node){
  visited[node]=true;
  for(auto child :graph[node]){
    if(!visited[child]){
      DFS(child);
    }
  }
}
int main()
{
int n,m;
cin>>n>>m;
for(int i=0;i<m;i++){
  int node1,node2;
  cin>>node1>>node2;
  graph[node1].push_back(node2);
  graph[node2].push_back(node1);
}
for(int i=1;i<=n;i++){
  if(!visited[i]){
    bridges.push_back(i);
    DFS(i);
  }
}
cout<<bridges.size()-1<<endl;
for(int i=0;i<bridges.size()-1;i++){
      cout<<bridges[i]<<" "<<bridges[i+1]<<endl;
}
return 0;
}