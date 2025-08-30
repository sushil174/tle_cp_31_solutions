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
        ll n;
        cin >> n;
        if(n % 2 && n > 1) cout << "YES" << nl;
        else {
            while(n % 2 == 0) {
                n = n / 2;
            }
            if(n > 1) cout << "YES" << nl;
            else cout << "NO" << nl;
        }
    }

    return 0;
}