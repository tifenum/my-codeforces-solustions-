    #include <iostream>
    #include <vector>
    #include <map>

    typedef long long ll;
    typedef std::vector<ll> v32;

    void solve(){
        ll n,k;
        std::cin >> n >> k;
        v32 y(n);
        std::map<ll,ll> p;
        ll s = 0;
        
        for(int i = 0; i < n; i++) {
            std::cin >> y[i];
        }

        for(int j = 0; j < n; j++) {
            ll k;
            std::cin >> k;
            p[std::abs(k)] += y[j];
        }

        for(auto& dddd : p) {
            s += dddd.second;
            dddd.second = s;
        }

        bool ans = true;
        for(const auto& pair : p) {
            if(pair.first * k < pair.second) {
                ans = false;
                break;
            }
        }

        std::cout << (ans ? "YES" : "NO") << std::endl;
    }

    int main() {
        ll t;
        std::cin >> t;
        for(int it = 1; it <= t; it++) {
            solve();
        }
        return 0;
    }
