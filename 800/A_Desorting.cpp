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
        
        bool check = false;
        int small = max(v[0],v[1]) - min(v[0],v[1]);
        for(int i=0;i<n-1;i++) {
            if(v[i] <= v[i+1]) small = min(small, v[i+1]-v[i]);
            else {
                check = true;
                break;
            }
        }
        if(check) {
            cout << 0 << nl;
        }else {
            int temp = small / 2;
            int m = small % 2;
            cout << temp + 1 << nl;
        }
    }

    return 0;
}