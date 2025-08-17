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
        ll a,b,n;
        cin >> a >> b >> n;
        ll total = b;
        for(int i=0;i<n;i++) {
            ll v;
            cin >> v;
            if(v >= a) total += a-1;
            else total += v;
            
        }
        cout << total << nl;
    }

    return 0;
}


