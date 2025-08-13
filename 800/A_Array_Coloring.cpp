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
        int sum = 0;
        for(int i=0;i<n;i++) {
            int v;
            cin >> v;
            sum += v;
        }
        cout << (sum % 2 == 0 ? "YES" : "NO") << nl;
    }

    return 0;
}