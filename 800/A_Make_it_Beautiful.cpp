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
        for(int i = 0; i < n; i++) cin >> v[i];
        sort(v.begin(), v.end(), greater<int>());
        if(v[0] == v[n-1]) {
            cout << "NO" << nl;
        }
        else {
            int temp = v[1];
            v[1] = v[n-1];
            v[n-1] = temp;
            cout << "YES" << nl;
            for(int i = 0; i < n; i++) {
                cout << v[i] << " ";
            }
            cout << nl;
        }
    }

    return 0;
}

