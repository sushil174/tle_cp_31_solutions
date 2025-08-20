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
       if(v[0] == 1) v[0]++;
        for(int i=1;i<n;i++) {
            if(v[i] == 1) v[i]++;
            if(v[i] % v[i-1] == 0) v[i] = v[i] + 1;
        }
        for(int i=0;i<n;i++) cout << v[i] << " ";
        cout << nl;
    }

    return 0;
}