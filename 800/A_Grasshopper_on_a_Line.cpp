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
        int n, k;
        cin >> n >> k;
        if(n % k != 0) {
            cout << 1 << nl;
            cout << n << nl;
        }
        else {
            cout << 2 << nl;
            cout << n-1 << " " << 1 << nl;
        }
    }

    return 0;
}

/*
    10 2


*/