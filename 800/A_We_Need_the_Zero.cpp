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
        for(int i=0;i<n;i++) cin >> v[i];
        int result = 0;
        for(int i=0;i<n;i++) {
            result ^= v[i];
        }
        if(n % 2 == 0) {
            if(result == 0 || n == 1) {
                cout << 0 << nl;
            } else {
                cout << -1 << nl;
            }
        } else {
            cout << result << nl;
        }

    }

    return 0;
}