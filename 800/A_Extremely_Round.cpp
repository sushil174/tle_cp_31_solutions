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
        int ans = 0;
        if(n <= 9) {
            cout << n << nl;
        } else {
            string s = to_string(n);
            int l = s.size();
            for(int i = 0; i < l - 1; i++) {
                ans += 9;
            };
            ans += s[0] - '0';
            cout << ans << nl;
        }
    }

    return 0;
}


