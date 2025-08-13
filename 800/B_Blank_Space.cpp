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
        for(int i=0;i<n;i++) {
            cin >> v[i];
        }

        int ans = 0;
        int m = 0;
        for(int i=0;i<n;i++) {
            if(v[i] == 0) {
                m++;
                ans = max(m, ans);
            }
            else {
                m = 0;
            }
        }
        cout << ans << nl;
    }

    return 0;
}