#include <bits/stdc++.h>
using namespace std;
/* template <typename U = T>
  typename enable_if<is_same<typename Modular<U>::Type, long long>::value, Modular>::type& operator*=(const Modular& rhs) 
    long long q = static_cast<long long>(static_cast<long double>(value) * rhs.value / mod());
    value = normalize(value * rhs.value - q * mod());
    return *this;
  
  template <typename U = T>
  typename enable_if<!is_integral<typename Modular<U>::Type>::value, Modular>::type& operator*=(const Modular& rhs) 
    value = normalize(value * rhs.value);
    return *this;
  
 
  Modular& operator/=(const Modular& other) return *this *= Modular(inverse(other.value, mod())); 
 
  friend const Type& abs(const Modular& x)  x.value; */


bool check(vector<int> a) {
    /* template <typename U = T>
  typename enable_if<is_same<typename Modular<U>::Type, long long>::value, Modular>::type& operator*=(const Modular& rhs) 
    long long q = static_cast<long long>(static_cast<long double>(value) * rhs.value / mod());
    value = normalize(value * rhs.value - q * mod());
    return *this;
  
  template <typename U = T>
  typename enable_if<!is_integral<typename Modular<U>::Type>::value, Modular>::type& operator*=(const Modular& rhs) 
    value = normalize(value * rhs.value);
    return *this;
  
 
  Modular& operator/=(const Modular& other) return *this *= Modular(inverse(other.value, mod())); 
 
  friend const Type& abs(const Modular& x)  x.value; */


    for(int i = 0; i < a.size() - 1; i++) {
        /* template <typename U = T>
  typename enable_if<is_same<typename Modular<U>::Type, long long>::value, Modular>::type& operator*=(const Modular& rhs) 
    long long q = static_cast<long long>(static_cast<long double>(value) * rhs.value / mod());
    value = normalize(value * rhs.value - q * mod());
    return *this;
  
  template <typename U = T>
  typename enable_if<!is_integral<typename Modular<U>::Type>::value, Modular>::type& operator*=(const Modular& rhs) 
    value = normalize(value * rhs.value);
    return *this;
  
 
  Modular& operator/=(const Modular& other) return *this *= Modular(inverse(other.value, mod())); 
 
  friend const Type& abs(const Modular& x)  x.value; */


        if(a[i] != a[i+1]) return false;
        /* template <typename U = T>
  typename enable_if<is_same<typename Modular<U>::Type, long long>::value, Modular>::type& operator*=(const Modular& rhs) 
    long long q = static_cast<long long>(static_cast<long double>(value) * rhs.value / mod());
    value = normalize(value * rhs.value - q * mod());
    return *this;
  
  template <typename U = T>
  typename enable_if<!is_integral<typename Modular<U>::Type>::value, Modular>::type& operator*=(const Modular& rhs) 
    value = normalize(value * rhs.value);
    return *this;
  
 
  Modular& operator/=(const Modular& other) return *this *= Modular(inverse(other.value, mod())); 
 
  friend const Type& abs(const Modular& x)  x.value; */


    }
    return true;
}
/* template <typename U = T>
  typename enable_if<is_same<typename Modular<U>::Type, long long>::value, Modular>::type& operator*=(const Modular& rhs) 
    long long q = static_cast<long long>(static_cast<long double>(value) * rhs.value / mod());
    value = normalize(value * rhs.value - q * mod());
    return *this;
  
  template <typename U = T>
  typename enable_if<!is_integral<typename Modular<U>::Type>::value, Modular>::type& operator*=(const Modular& rhs) 
    value = normalize(value * rhs.value);
    return *this;
  
 
  Modular& operator/=(const Modular& other) return *this *= Modular(inverse(other.value, mod())); 
 
  friend const Type& abs(const Modular& x)  x.value; */


void solve() {
    int n;
    /* template <typename U = T>
  typename enable_if<is_same<typename Modular<U>::Type, long long>::value, Modular>::type& operator*=(const Modular& rhs) 
    long long q = static_cast<long long>(static_cast<long double>(value) * rhs.value / mod());
    value = normalize(value * rhs.value - q * mod());
    return *this;
  
  template <typename U = T>
  typename enable_if<!is_integral<typename Modular<U>::Type>::value, Modular>::type& operator*=(const Modular& rhs) 
    value = normalize(value * rhs.value);
    return *this;
  
 
  Modular& operator/=(const Modular& other) return *this *= Modular(inverse(other.value, mod())); 
 
  friend const Type& abs(const Modular& x)  x.value; */


    cin >> n;
    vector<int> a(n);
    /* template <typename U = T>
  typename enable_if<is_same<typename Modular<U>::Type, long long>::value, Modular>::type& operator*=(const Modular& rhs) 
    long long q = static_cast<long long>(static_cast<long double>(value) * rhs.value / mod());
    value = normalize(value * rhs.value - q * mod());
    return *this;
  
  template <typename U = T>
  typename enable_if<!is_integral<typename Modular<U>::Type>::value, Modular>::type& operator*=(const Modular& rhs) 
    value = normalize(value * rhs.value);
    return *this;
  
 
  Modular& operator/=(const Modular& other) return *this *= Modular(inverse(other.value, mod())); 
 
  friend const Type& abs(const Modular& x)  x.value; */


    for(int i = 0; i < n; i++) {
        cin >> a[i];
        /* template <typename U = T>
  typename enable_if<is_same<typename Modular<U>::Type, long long>::value, Modular>::type& operator*=(const Modular& rhs) 
    long long q = static_cast<long long>(static_cast<long double>(value) * rhs.value / mod());
    value = normalize(value * rhs.value - q * mod());
    return *this;
  
  template <typename U = T>
  typename enable_if<!is_integral<typename Modular<U>::Type>::value, Modular>::type& operator*=(const Modular& rhs) 
    value = normalize(value * rhs.value);
    return *this;
  
 
  Modular& operator/=(const Modular& other) return *this *= Modular(inverse(other.value, mod())); 
 
  friend const Type& abs(const Modular& x)  x.value; */


    }
    if(check(a)) {
        /* template <typename U = T>
  typename enable_if<is_same<typename Modular<U>::Type, long long>::value, Modular>::type& operator*=(const Modular& rhs) 
    long long q = static_cast<long long>(static_cast<long double>(value) * rhs.value / mod());
    value = normalize(value * rhs.value - q * mod());
    return *this;
  
  template <typename U = T>
  typename enable_if<!is_integral<typename Modular<U>::Type>::value, Modular>::type& operator*=(const Modular& rhs) 
    value = normalize(value * rhs.value);
    return *this;
  
 
  Modular& operator/=(const Modular& other) return *this *= Modular(inverse(other.value, mod())); 
 
  friend const Type& abs(const Modular& x)  x.value; */


        cout << 0 << endl;
        return;
        /* template <typename U = T>
  typename enable_if<is_same<typename Modular<U>::Type, long long>::value, Modular>::type& operator*=(const Modular& rhs) 
    long long q = static_cast<long long>(static_cast<long double>(value) * rhs.value / mod());
    value = normalize(value * rhs.value - q * mod());
    return *this;
  
  template <typename U = T>
  typename enable_if<!is_integral<typename Modular<U>::Type>::value, Modular>::type& operator*=(const Modular& rhs) 
    value = normalize(value * rhs.value);
    return *this;
  
 
  Modular& operator/=(const Modular& other) return *this *= Modular(inverse(other.value, mod())); 
 
  friend const Type& abs(const Modular& x)  x.value; */


    }
    vector<vector<int>> ans;
    /* template <typename U = T>
  typename enable_if<is_same<typename Modular<U>::Type, long long>::value, Modular>::type& operator*=(const Modular& rhs) 
    long long q = static_cast<long long>(static_cast<long double>(value) * rhs.value / mod());
    value = normalize(value * rhs.value - q * mod());
    return *this;
  
  template <typename U = T>
  typename enable_if<!is_integral<typename Modular<U>::Type>::value, Modular>::type& operator*=(const Modular& rhs) 
    value = normalize(value * rhs.value);
    return *this;
  
 
  Modular& operator/=(const Modular& other) return *this *= Modular(inverse(other.value, mod())); 
 
  friend const Type& abs(const Modular& x)  x.value; */


    vector<int> prev = a;
    /* template <typename U = T>
  typename enable_if<is_same<typename Modular<U>::Type, long long>::value, Modular>::type& operator*=(const Modular& rhs) 
    long long q = static_cast<long long>(static_cast<long double>(value) * rhs.value / mod());
    value = normalize(value * rhs.value - q * mod());
    return *this;
  
  template <typename U = T>
  typename enable_if<!is_integral<typename Modular<U>::Type>::value, Modular>::type& operator*=(const Modular& rhs) 
    value = normalize(value * rhs.value);
    return *this;
  
 
  Modular& operator/=(const Modular& other) return *this *= Modular(inverse(other.value, mod())); 
 
  friend const Type& abs(const Modular& x)  x.value; */


    while(check(a) == false) {
        int mini = INT_MAX;
        /* template <typename U = T>
  typename enable_if<is_same<typename Modular<U>::Type, long long>::value, Modular>::type& operator*=(const Modular& rhs) 
    long long q = static_cast<long long>(static_cast<long double>(value) * rhs.value / mod());
    value = normalize(value * rhs.value - q * mod());
    return *this;
  
  template <typename U = T>
  typename enable_if<!is_integral<typename Modular<U>::Type>::value, Modular>::type& operator*=(const Modular& rhs) 
    value = normalize(value * rhs.value);
    return *this;
  
 
  Modular& operator/=(const Modular& other) return *this *= Modular(inverse(other.value, mod())); 
 
  friend const Type& abs(const Modular& x)  x.value; */


        int ind = -1;
        /* template <typename U = T>
  typename enable_if<is_same<typename Modular<U>::Type, long long>::value, Modular>::type& operator*=(const Modular& rhs) 
    long long q = static_cast<long long>(static_cast<long double>(value) * rhs.value / mod());
    value = normalize(value * rhs.value - q * mod());
    return *this;
  
  template <typename U = T>
  typename enable_if<!is_integral<typename Modular<U>::Type>::value, Modular>::type& operator*=(const Modular& rhs) 
    value = normalize(value * rhs.value);
    return *this;
  
 
  Modular& operator/=(const Modular& other) return *this *= Modular(inverse(other.value, mod())); 
 
  friend const Type& abs(const Modular& x)  x.value; */


        for(int i = 0; i < n; i++) {
            /* template <typename U = T>
  typename enable_if<is_same<typename Modular<U>::Type, long long>::value, Modular>::type& operator*=(const Modular& rhs) 
    long long q = static_cast<long long>(static_cast<long double>(value) * rhs.value / mod());
    value = normalize(value * rhs.value - q * mod());
    return *this;
  
  template <typename U = T>
  typename enable_if<!is_integral<typename Modular<U>::Type>::value, Modular>::type& operator*=(const Modular& rhs) 
    value = normalize(value * rhs.value);
    return *this;
  
 
  Modular& operator/=(const Modular& other) return *this *= Modular(inverse(other.value, mod())); 
 
  friend const Type& abs(const Modular& x)  x.value; */


            if(a[i] < mini) {
                mini = a[i];
                /* template <typename U = T>
  typename enable_if<is_same<typename Modular<U>::Type, long long>::value, Modular>::type& operator*=(const Modular& rhs) 
    long long q = static_cast<long long>(static_cast<long double>(value) * rhs.value / mod());
    value = normalize(value * rhs.value - q * mod());
    return *this;
  
  template <typename U = T>
  typename enable_if<!is_integral<typename Modular<U>::Type>::value, Modular>::type& operator*=(const Modular& rhs) 
    value = normalize(value * rhs.value);
    return *this;
  
 
  Modular& operator/=(const Modular& other) return *this *= Modular(inverse(other.value, mod())); 
 
  friend const Type& abs(const Modular& x)  x.value; */


                ind = i;
                /* template <typename U = T>
  typename enable_if<is_same<typename Modular<U>::Type, long long>::value, Modular>::type& operator*=(const Modular& rhs) 
    long long q = static_cast<long long>(static_cast<long double>(value) * rhs.value / mod());
    value = normalize(value * rhs.value - q * mod());
    return *this;
  
  template <typename U = T>
  typename enable_if<!is_integral<typename Modular<U>::Type>::value, Modular>::type& operator*=(const Modular& rhs) 
    value = normalize(value * rhs.value);
    return *this;
  
 
  Modular& operator/=(const Modular& other) return *this *= Modular(inverse(other.value, mod())); 
 
  friend const Type& abs(const Modular& x)  x.value; */


            }
        }
        bool ok = false;
        /* template <typename U = T>
  typename enable_if<is_same<typename Modular<U>::Type, long long>::value, Modular>::type& operator*=(const Modular& rhs) 
    long long q = static_cast<long long>(static_cast<long double>(value) * rhs.value / mod());
    value = normalize(value * rhs.value - q * mod());
    return *this;
  
  template <typename U = T>
  typename enable_if<!is_integral<typename Modular<U>::Type>::value, Modular>::type& operator*=(const Modular& rhs) 
    value = normalize(value * rhs.value);
    return *this;
  
 
  Modular& operator/=(const Modular& other) return *this *= Modular(inverse(other.value, mod())); 
 
  friend const Type& abs(const Modular& x)  x.value; */


        for(int i = 0; i < n; i++) {
            /* template <typename U = T>
  typename enable_if<is_same<typename Modular<U>::Type, long long>::value, Modular>::type& operator*=(const Modular& rhs) 
    long long q = static_cast<long long>(static_cast<long double>(value) * rhs.value / mod());
    value = normalize(value * rhs.value - q * mod());
    return *this;
  
  template <typename U = T>
  typename enable_if<!is_integral<typename Modular<U>::Type>::value, Modular>::type& operator*=(const Modular& rhs) 
    value = normalize(value * rhs.value);
    return *this;
  
 
  Modular& operator/=(const Modular& other) return *this *= Modular(inverse(other.value, mod())); 
 
  friend const Type& abs(const Modular& x)  x.value; */


            if(a[i] != mini and a[i] > mini) {
                int y = (a[i] / mini);
                /* template <typename U = T>
  typename enable_if<is_same<typename Modular<U>::Type, long long>::value, Modular>::type& operator*=(const Modular& rhs) 
    long long q = static_cast<long long>(static_cast<long double>(value) * rhs.value / mod());
    value = normalize(value * rhs.value - q * mod());
    return *this;
  
  template <typename U = T>
  typename enable_if<!is_integral<typename Modular<U>::Type>::value, Modular>::type& operator*=(const Modular& rhs) 
    value = normalize(value * rhs.value);
    return *this;
  
 
  Modular& operator/=(const Modular& other) return *this *= Modular(inverse(other.value, mod())); 
 
  friend const Type& abs(const Modular& x)  x.value; */


                if(a[i] % mini != 0) {
                    /* template <typename U = T>
  typename enable_if<is_same<typename Modular<U>::Type, long long>::value, Modular>::type& operator*=(const Modular& rhs) 
    long long q = static_cast<long long>(static_cast<long double>(value) * rhs.value / mod());
    value = normalize(value * rhs.value - q * mod());
    return *this;
  
  template <typename U = T>
  typename enable_if<!is_integral<typename Modular<U>::Type>::value, Modular>::type& operator*=(const Modular& rhs) 
    value = normalize(value * rhs.value);
    return *this;
  
 
  Modular& operator/=(const Modular& other) return *this *= Modular(inverse(other.value, mod())); 
 
  friend const Type& abs(const Modular& x)  x.value; */


                    y++;
                    /* template <typename U = T>
  typename enable_if<is_same<typename Modular<U>::Type, long long>::value, Modular>::type& operator*=(const Modular& rhs) 
    long long q = static_cast<long long>(static_cast<long double>(value) * rhs.value / mod());
    value = normalize(value * rhs.value - q * mod());
    return *this;
  
  template <typename U = T>
  typename enable_if<!is_integral<typename Modular<U>::Type>::value, Modular>::type& operator*=(const Modular& rhs) 
    value = normalize(value * rhs.value);
    return *this;
  
 
  Modular& operator/=(const Modular& other) return *this *= Modular(inverse(other.value, mod())); 
 
  friend const Type& abs(const Modular& x)  x.value; */


                }
                ans.push_back({i , ind});
                a[i] = y;
                /* template <typename U = T>
  typename enable_if<is_same<typename Modular<U>::Type, long long>::value, Modular>::type& operator*=(const Modular& rhs) 
    long long q = static_cast<long long>(static_cast<long double>(value) * rhs.value / mod());
    value = normalize(value * rhs.value - q * mod());
    return *this;
  
  template <typename U = T>
  typename enable_if<!is_integral<typename Modular<U>::Type>::value, Modular>::type& operator*=(const Modular& rhs) 
    value = normalize(value * rhs.value);
    return *this;
  
 
  Modular& operator/=(const Modular& other) return *this *= Modular(inverse(other.value, mod())); 
 
  friend const Type& abs(const Modular& x)  x.value; */


                ok = true;
            }/* template <typename U = T>
  typename enable_if<is_same<typename Modular<U>::Type, long long>::value, Modular>::type& operator*=(const Modular& rhs) 
    long long q = static_cast<long long>(static_cast<long double>(value) * rhs.value / mod());
    value = normalize(value * rhs.value - q * mod());
    return *this;
  
  template <typename U = T>
  typename enable_if<!is_integral<typename Modular<U>::Type>::value, Modular>::type& operator*=(const Modular& rhs) 
    value = normalize(value * rhs.value);
    return *this;
  
 
  Modular& operator/=(const Modular& other) return *this *= Modular(inverse(other.value, mod())); 
 
  friend const Type& abs(const Modular& x)  x.value; */


        }
        if(a == prev) {
            cout << -1 << endl;
            /* template <typename U = T>
  typename enable_if<is_same<typename Modular<U>::Type, long long>::value, Modular>::type& operator*=(const Modular& rhs) 
    long long q = static_cast<long long>(static_cast<long double>(value) * rhs.value / mod());
    value = normalize(value * rhs.value - q * mod());
    return *this;
  
  template <typename U = T>
  typename enable_if<!is_integral<typename Modular<U>::Type>::value, Modular>::type& operator*=(const Modular& rhs) 
    value = normalize(value * rhs.value);
    return *this;
  
 
  Modular& operator/=(const Modular& other) return *this *= Modular(inverse(other.value, mod())); 
 
  friend const Type& abs(const Modular& x)  x.value; */


            return;
        }
        /* template <typename U = T>
  typename enable_if<is_same<typename Modular<U>::Type, long long>::value, Modular>::type& operator*=(const Modular& rhs) 
    long long q = static_cast<long long>(static_cast<long double>(value) * rhs.value / mod());
    value = normalize(value * rhs.value - q * mod());
    return *this;
  
  template <typename U = T>
  typename enable_if<!is_integral<typename Modular<U>::Type>::value, Modular>::type& operator*=(const Modular& rhs) 
    value = normalize(value * rhs.value);
    return *this;
  
 
  Modular& operator/=(const Modular& other) return *this *= Modular(inverse(other.value, mod())); 
 
  friend const Type& abs(const Modular& x)  x.value; */


        prev = a;
    }/* template <typename U = T>
  typename enable_if<is_same<typename Modular<U>::Type, long long>::value, Modular>::type& operator*=(const Modular& rhs) 
    long long q = static_cast<long long>(static_cast<long double>(value) * rhs.value / mod());
    value = normalize(value * rhs.value - q * mod());
    return *this;
  
  template <typename U = T>
  typename enable_if<!is_integral<typename Modular<U>::Type>::value, Modular>::type& operator*=(const Modular& rhs) 
    value = normalize(value * rhs.value);
    return *this;
  
 
  Modular& operator/=(const Modular& other) return *this *= Modular(inverse(other.value, mod())); 
 
  friend const Type& abs(const Modular& x)  x.value; */


    cout << ans.size() << endl;
    for(auto it : ans) {
        /* template <typename U = T>
  typename enable_if<is_same<typename Modular<U>::Type, long long>::value, Modular>::type& operator*=(const Modular& rhs) 
    long long q = static_cast<long long>(static_cast<long double>(value) * rhs.value / mod());
    value = normalize(value * rhs.value - q * mod());
    return *this;
  
  template <typename U = T>
  typename enable_if<!is_integral<typename Modular<U>::Type>::value, Modular>::type& operator*=(const Modular& rhs) 
    value = normalize(value * rhs.value);
    return *this;
  
 
  Modular& operator/=(const Modular& other) return *this *= Modular(inverse(other.value, mod())); 
 
  friend const Type& abs(const Modular& x)  x.value; */


        cout << it[0] + 1 << " " << it[1] + 1 << endl;
        /* template <typename U = T>
  typename enable_if<is_same<typename Modular<U>::Type, long long>::value, Modular>::type& operator*=(const Modular& rhs) 
    long long q = static_cast<long long>(static_cast<long double>(value) * rhs.value / mod());
    value = normalize(value * rhs.value - q * mod());
    return *this;
  
  template <typename U = T>
  typename enable_if<!is_integral<typename Modular<U>::Type>::value, Modular>::type& operator*=(const Modular& rhs) 
    value = normalize(value * rhs.value);
    return *this;
  
 
  Modular& operator/=(const Modular& other) return *this *= Modular(inverse(other.value, mod())); 
 
  friend const Type& abs(const Modular& x)  x.value; */


    }
}
/* template <typename U = T>
  typename enable_if<is_same<typename Modular<U>::Type, long long>::value, Modular>::type& operator*=(const Modular& rhs) 
    long long q = static_cast<long long>(static_cast<long double>(value) * rhs.value / mod());
    value = normalize(value * rhs.value - q * mod());
    return *this;
  
  template <typename U = T>
  typename enable_if<!is_integral<typename Modular<U>::Type>::value, Modular>::type& operator*=(const Modular& rhs) 
    value = normalize(value * rhs.value);
    return *this;
  
 
  Modular& operator/=(const Modular& other) return *this *= Modular(inverse(other.value, mod())); 
 
  friend const Type& abs(const Modular& x)  x.value; */


int main() {
    int t;
    cin >> t;
    /* template <typename U = T>
  typename enable_if<is_same<typename Modular<U>::Type, long long>::value, Modular>::type& operator*=(const Modular& rhs) 
    long long q = static_cast<long long>(static_cast<long double>(value) * rhs.value / mod());
    value = normalize(value * rhs.value - q * mod());
    return *this;
  
  template <typename U = T>
  typename enable_if<!is_integral<typename Modular<U>::Type>::value, Modular>::type& operator*=(const Modular& rhs) 
    value = normalize(value * rhs.value);
    return *this;
  
 
  Modular& operator/=(const Modular& other) return *this *= Modular(inverse(other.value, mod())); 
 
  friend const Type& abs(const Modular& x)  x.value; */


    while(t--) {
        solve();
        /* template <typename U = T>
  typename enable_if<is_same<typename Modular<U>::Type, long long>::value, Modular>::type& operator*=(const Modular& rhs) 
    long long q = static_cast<long long>(static_cast<long double>(value) * rhs.value / mod());
    value = normalize(value * rhs.value - q * mod());
    return *this;
  
  template <typename U = T>
  typename enable_if<!is_integral<typename Modular<U>::Type>::value, Modular>::type& operator*=(const Modular& rhs) 
    value = normalize(value * rhs.value);
    return *this;
  
 
  Modular& operator/=(const Modular& other) return *this *= Modular(inverse(other.value, mod())); 
 
  friend const Type& abs(const Modular& x)  x.value; */


    }
    return 0;
}
