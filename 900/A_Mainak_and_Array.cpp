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
        int s = 1000, l = 0, si = 0, li = 0;
        int sl = 0;
        for(int i=0;i<n;i++) {
            cin >> v[i];
            if(v[i] <= s) {
                s = v[i];
                si = i;
            } 

            if(v[i] >= l) {
                l = v[i];
                li = i;
            }

            if(i != 0) sl = max(sl,v[i-1] - v[i]);
        }



        if((li != n-1 && v[li + 1] == s) || (si != 0 && v[si-1] == l)) cout << l - s << nl;
        else {
            int a = v[n-1] - s, b = l - v[0], c = (si != 0 ? v[si - 1] - v[si] : 0), d = (li != n-1 ? v[li] - v[li + 1] : 0);
            int ans = max(max(max(a,b), max(c,d)), sl);
            cout << ans << nl;
        }

        // else {
        //     if((v[n-1] - s) > (l - v[0])) {
        //         if(si != 0 && v[n-1] - v[si - 1] >  v[n-1] - s) cout << v[n-1] - v[si - 1] << nl;
        //         else cout << v[n-1] - s << nl;
        //     }
        //     else {
        //         if(li != n-1 && l - v[0] < v[li + 1] - v[0]) cout << v[li + 1] - v[0] << nl;
        //         else cout << l - v[0] << nl;
        //     }
        // }

    }

    return 0;
}