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
        int n, q;
        cin >> n >> q;
        vi v(n);
        vi per(n);
        for(int i=0;i<n;i++) {
            cin >> v[i];
            if(i) per[i] = per[i-1] + v[i];
            else per[i] = v[i];
        }
        while(q--) {
            int l,r,k;
            cin >> l >> r >> k;
            int total = per[n-1];
            int sub = per[r-1] - (l == 1 ? 0 : per[l-1-1]);
            int a = ((r - l) + 1) * k;
            if(((total - sub) + a) % 2) cout << "YES" << nl;
            else cout << "NO" << nl;
        }

    }

    return 0;
}