// #include <bits/stdc++.h>
// using namespace std;

// typedef long long ll;
// #define int ll
// #define endl '\n'

// const ll mod = 1000000007;

// // 0-up 1-right 2-down 3-left
// int dx[4] = {-1, 0, 1, 0};
// int dy[4] = {0, 1, 0, -1};
// string step = "URDL";

// signed main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);

//     int n, m;
//     cin >> n >> m;
//     pair<int, int> start, end;
//     char grid[n][m];
//     bool visited[n][m];

//     for (int i = 0; i < n; i++){
//         for (int j = 0; j < m; j++){
//             cin >> grid[i][j];
//             visited[i][j] = false;
//             if (grid[i][j] == 'A')
//             {
//                 start = {i, j};
//             }
//             if (grid[i][j] == 'B')
//             {
//                 end = {i, j};
//             }
//         }
//     }

//     visited[start.first][start.second] = true;
//     int prevstep[n][m];

//     queue<pair<int, int>> q;
//     q.push(start);

//     while (!q.empty())
//     {
//         pair<int, int> u = q.front();
//         q.pop();
//         for (int i = 0; i < 4; i++){
//             pair<int, int> v = make_pair(u.first + dx[i], u.second + dy[i]);
//             if (v.first < 0 || v.first >= n || v.second < 0 || v.second >= m)
//                 continue;
//             if (grid[v.first][v.second] == '#')
//                 continue;
//             if (visited[v.first][v.second])
//                 continue;
//             visited[v.first][v.second] = true;
//             prevstep[v.first][v.second] = i;
//             q.push(v);
//         }
//     }

//     if (visited[end.first][end.second]){
//         cout << "YES" << endl;
//         vector<int> steps;
//         while (end != start){
//             int p = prevstep[end.first][end.second];
//             steps.push_back(p);
//             end = make_pair(end.first - dx[p], end.second - dy[p]);
//         }
//         reverse(steps.begin(), steps.end());
//         cout << steps.size() << endl;
//         for (char c : steps){
//             cout << step[c];
//         }
//     }
//     else{
//         cout << "NO" << endl;
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

// 0-up 1-right 2-down 3-left
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};
string step = "URDL";
pair<int, int> start = {0, 0}; // Initialize start
pair<int, int> end = {0, 0};   // Initialize end

void solve(){
}
int main()
{
    int n, m;
    cin >> n >> m;
    pair<int, int> start, end;
    char grid[n][m];
    bool visited[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>grid[i][j];
            visited[i][j]=false;
            if(grid[i][j]=='A'){
                start.first=i;
                start.second=j;
            }
            if(grid[i][j]=='B'){
                end.first=i;
                end.second=j;
            }
        }
    }
    visited[start.first][start.second]=true;
    queue<pair<int,int>> q;
    int prevstep[n][m];
    q.push(start);
    while(!q.empty()){
        pair<int,int> u=q.front();
        q.pop();
        for(int i=0;i<4;i++){
            if (u.first + dx[i] < 0 || u.second + dy[i] < 0 || u.first + dx[i] >= n || u.second + dy[i] >= m ||
                visited[u.first + dx[i]][u.second + dy[i]] || grid[u.first + dx[i]][u.second + dy[i]] == '#') {
                continue;
            }
            q.push({u.first + dx[i], u.second + dy[i]});
            prevstep[u.first + dx[i]][u.second + dy[i]] = i;
            visited[u.first + dx[i]][u.second + dy[i]] = true;
        }
    }
    if(visited[end.first][end.second]){
        cout<<"YES"<<endl;
        vector<int> steps;
        while(end!=start){
            int p=prevstep[end.first][end.second];
            steps.push_back(p);
            end = make_pair(end.first - dx[p], end.second - dy[p]);
        }
        reverse(steps.begin(),steps.end());
        cout << steps.size() << endl;
        for (int c : steps) { // Corrected variable type in loop
            cout << step[c];
        }
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}