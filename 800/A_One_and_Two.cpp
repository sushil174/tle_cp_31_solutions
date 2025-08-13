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
        bool check = true;
        int count2 = 0;
        for(int i=0;i<n;i++) {
            cin >> v[i];
            if(v[i] != 1) check = false;
            if(v[i] == 2) count2 += 1;
        }
        if(check) {
            cout << 1 << nl;
        } else {
            if(count2 % 2 == 0) {
                int target = count2 / 2;
                int newCount = 0;
                for(int i=0;i<n;i++) {
                    if(v[i] == 2) newCount += 1;
                    if(newCount == target) {
                        cout << i + 1 << nl;
                        break;
                    }
                }
            } else {
                cout << -1 << nl;
            }
        }
    }

    return 0;
}