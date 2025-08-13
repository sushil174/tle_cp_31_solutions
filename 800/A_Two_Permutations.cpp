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
        int a,b,c;
        cin >> a >> b >> c;
        if(a == 1 || a == b && b == c || (a - (b + c) >= 2)) {
            cout << "yes" << nl;
        } else {
            cout << "no" << nl;
        }
    }

    return 0;
}





/*




*/