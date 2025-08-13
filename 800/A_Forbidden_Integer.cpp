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
        int n,k,x;
        cin >> n >> k >> x;
        if(x != 1) {
            cout << "YES"<<nl;
            cout << n << nl;
            for(int i=1;i<=n;i++) cout << 1 << " ";
            cout << nl;
        } else {
            if(n % k == 0 && k != x) {
                cout << "YES" << nl;
                cout << n / k << nl;
                for(int i=0;i< n / k;i++) {
                    cout << k << " ";
                }
                cout << nl;
            } else {
                if(k <= 2) cout << "NO" << nl;
                else {
                    int temp = n / 2;
                    int m = n % 2;
                    cout << "YES" << nl;
                    cout << temp << nl;
                    for(int i=0;i<(m ? temp - 1 : temp);i++) {
                        cout << 2 << " ";
                    }
                    if(m) cout << 3 << " ";
                    cout << nl;
                }
            }

        }
    }

    return 0;
}


