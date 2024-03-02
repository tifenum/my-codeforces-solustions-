#include<bits/stdc++.h>
using namespace std;

int arr[] = { 1, 3, 5, 10, 15 };
long long n, k, ans = (long long) 1e9;

int main() {
    cin >> n;
    while (k <= 4) {
        int cur = n, i = 0, t = 0;
        if (k * 15 <= cur) {
            cur -= k * 15;
            t += k;
        }
        while (cur) {
            t += cur / arr[i];
            cur %= arr[i];
            i++;
        }
        ans = min(ans, (long long)t); 
        k++;
    }
    cout << ans << "\n";
    return 0;
}
