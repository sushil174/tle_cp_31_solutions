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

        // int a = v[0] ^ v[1];
        // if(n == 2) {
        //     cout << (a ? 2 : 1) << nl;
        //     if(a) cout << 1 << " " << 2 << nl;
        //     cout << 1 << " " << 2 << nl;
        // } else {
        //     cout << (a ? 3 : 2) << nl;
        //     if(a) cout << 1 << " " << 2 << nl;
        //     cout << 1 << " " << 2 << nl;
        //     cout << 1 << " " << n << nl;
        // }  
        // cout << 2 << nl;
        // cout << 1 << " " << n << nl; 
        // cout << 1 << " " << n << nl; 

        if(n % 2 == 0) {
            cout << 2 << nl;
            cout << 1 << " " << n << nl; 
            cout << 1 << " " << n << nl; 
        } else {
            cout << 4 << nl;
            cout << 1 << " " << 2 << nl;
            cout << 1 << " " << 2 << nl;
            cout << 2 << " " << n << nl;
            cout << 2 << " " << n << nl;
        }

    }

    return 0;
}