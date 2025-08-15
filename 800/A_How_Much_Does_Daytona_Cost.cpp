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
        int n , k;
        cin >> n >> k;
        bool check = false;
        for(int i=0;i<n;i++) {
            int v;
            cin >> v;
            if(v == k) check = true;
        }

        cout << (check ? "YES" : "NO") << nl;
    }

    return 0;
}