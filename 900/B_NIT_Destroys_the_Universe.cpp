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
        int n, p = 0, p1 = 0;
        cin >> n;
        vi v(n);
        for(int i=0;i<n;i++) {
            cin >> v[i];
            if(v[i] == 0) p++;
        }
        if(v[0] != 0) p1++;
        for(int i=1;i<n;i++) {
            if((v[i-1] == 0 && v[i] != 0)) p1++; 
        }

        if(n == p) cout << 0 << nl;
        else {
            if(n <= 1) cout << 1 << nl;
            else {
                if (p == 1 || p1 == 1 || p == 0) cout << 1 << nl;
                else cout << 2 << nl;
            }
        }
    }

    return 0;
}