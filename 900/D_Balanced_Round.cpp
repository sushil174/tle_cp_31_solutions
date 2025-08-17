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
        int n,k;
        cin >> n >> k;
        vi v(n);
        for(int i=0; i<n; i++) cin >> v[i];
        sort(v.begin(), v.end());
        int ans = 0;
        int start = 0;
        for(int i=1;i<n;i++) {
            if(v[i] - v[i-1] > k) {
                ans = max(ans, abs(start - i));
                start = i;
            }
        }
        ans = max(ans, n - start);
        cout << n - ans << nl;
    }

    return 0;
}