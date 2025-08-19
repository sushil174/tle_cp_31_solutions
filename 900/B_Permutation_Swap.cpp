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
        set<int> ans;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            int a = abs((i + 1) - v[i]);
            if (a) ans.insert(a);
        }
        
        int g = 0;
        for(int x : ans) {
            g = gcd(g, x);
        }
        cout << g << nl;
    }

    return 0;
}
