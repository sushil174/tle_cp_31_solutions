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

        for(int i=0; i<n; i++) {
            cout << n - v[i] + 1 << " ";
        }
        cout << nl;

    }

    return 0;
}


/*
    1 4 3 2
    4 1 2 3


*/