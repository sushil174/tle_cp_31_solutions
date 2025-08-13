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
        cin>>n;
        vi v(n);
        for(int i=0;i<n;i++) {
            cin >> v[i];
        }

        int ans = 0;
        for(int i=0;i<n-1;i++) {
            if((v[i] % 2) == (v[i+1] % 2)) {
                ans++;
            }
        }
        cout << ans << nl;
    }

    return 0;
}