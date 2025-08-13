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
        ll a,b,c;
        cin >> a >> b >> c;
        ll total = (a + b + c) % 2;
        if(total % 2 == 0) {
            cout << (a > b ? "First" : "Second") << nl;
        } else {
            cout << (b > a ? "Second" : "First") << nl;
        }
    }

    return 0;
}

