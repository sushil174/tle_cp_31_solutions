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

        sort(v.begin(), v.end());
        if(v[0] == v[n - 1]) cout << -1 << nl;
        else {
            int count = 0;
            for(int i=0;i<n;i++) {
                if(v[0] == v[i]) count++;
            }
            cout << count << " " << n - count << nl;
            for(int i=0;i<count;i++) cout << v[0] << " ";
            cout << nl;
            for(int i=count;i<n;i++) cout << v[i] << " ";
            cout << nl;

        }
    }

    return 0;
}