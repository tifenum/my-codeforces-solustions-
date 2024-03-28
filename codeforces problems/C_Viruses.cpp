#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct Module {
    string name;
    ll capacity;
    ll position;
    bool status;
};

struct Virus {
    ll id;
    ll position;
    bool status;
};

struct VirusModule {
    ll virusId;
    string moduleName;
    ll capacityAgainstModule;
};
vector<Virus> viruses;
vector<Module> modules;
// Function to search for a module by name and return its reference
Module& search(string name) {
    for (auto& i : modules) {
        if (i.name == name) {
            return i;
        }
    }
}

Virus& findbyid(ll id) {
    for (auto& v : viruses) {
        if (v.id == id) {
            return v;
        }
    }}
bool compareByPosition(const Module& a, const Module& b) {
    return a.position > b.position;
}

void solve() {
    ll n, m, q,num=0;
    cin >> n >> m >> q;

    modules.clear(); // Clear modules vector for each test case
    viruses.clear();
    for (ll i = 0; i < n; i++) {
        Module m;
        cin >> m.name >> m.capacity >> m.position;
        m.status=true;
        modules.push_back(m);
    }

    for (ll i = 0; i < m; ++i) {
        Virus v;
        cin >> v.id >> v.position;
        v.status=true;
        viruses.push_back(v);
    }

    for (ll i = 0; i < q; ++i) {
        VirusModule vm;
        cin >> vm.virusId >> vm.moduleName >> vm.capacityAgainstModule;
        Module& a = search(vm.moduleName);
        Virus& o=findbyid(vm.virusId);
        if (o.position >= a.position && a.status && o.status) {
            a.capacity -= vm.capacityAgainstModule;
            if (a.capacity < 0) {
                a.status=false;
                num++;
                continue;
            }
            if (a.capacity == 0) {
                a.status=false;
                o.status=false;
                num++;
                continue;
            }
            if(a.capacity>0){
                o.status=false;
                continue;
            }
        }
    }

    sort(modules.begin(), modules.end(), compareByPosition);
    cout << modules.size()-num << endl;
    for (auto& i : modules) {
        if(i.status){

        cout << i.name << " ";
        }
    }
    cout << endl;
}

int main() {
    solve();
    return 0;
}
