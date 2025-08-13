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
        int p = 0;
        int np = 0;
        for(int i=0;i<n;i++) {
            cin >> v[i];
            v[i] == -1 ? np++ : p++;
        }
        if(np <= p && np % 2 == 0) cout << 0 << nl;
        else {

        }


    }

    return 0;
}

/*
-1 -1 -1 1 1



even the number of -1
atleast one positive 1
*/