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
        // ll a = n % 4;
        // ll b = n % 6;
        // bool temp = (a == 2 || b == 2);
        // if(a == 0 && b == 0) cout << n / 6 << " " << n / 4 << nl;
        // else if((a == 0 && (b % 4 == 0))) {
        //     cout << (n / 6)  << " " << n / 4 << nl;
        // } 
        // else if(temp) {
        //     cout << (n / 6) + (b == 2 ? 1 : 0) << " " << n / 4 << nl;
        // }
        // else cout << -1 << nl;


        if(n < 4 || n % 2 == 1) cout << -1 << nl;
        else {
            ll a = ceil(n * 1.0 / 6);
            ll b = n / 4;
            cout << a << " "<< b << nl;
        }
    }

    return 0;
}
