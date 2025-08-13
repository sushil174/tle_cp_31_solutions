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
        bool check = false;
        
        for(int i=0;i<n;i++) {
            for(int j = i + 1; j < n; j++ ) {
                if(gcd(v[i], v[j]) <= 2) {
                    check = true;
                    break;
                }
            }
        }
        cout << (check ? "YES" : "NO") << nl;
    }

    return 0;
}