#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"
#define vi vector<int>

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vi v(n);
        unordered_map<int, int> m;
        int max_f = 0;
        for(int i=0;i<n;i++) {
            cin >> v[i];
            max_f = max(max_f, ++m[v[i]]);
        }
        if(max_f == n) {
            cout << 0 << nl;
        } else {
            int ans = 0;
            int have = max_f;
            while (have < n) {
                ans++; 
                int add = min(n - have, have);
                ans += add; 
                have += add;
            }
            cout << ans << nl;
        }
    }

    return 0;
}