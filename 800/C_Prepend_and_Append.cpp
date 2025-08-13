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
        string s;
        cin >> s;
        int ans = 0;
        for(int i = 0; i < n/2; i++) {
            if (s[i] != s[n - i - 1]) ans++;
            else break;
        }
        cout << n -  ans * 2 << nl;
     }

    return 0;
}



