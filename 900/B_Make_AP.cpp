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
        //check if c is messing
        int cx = (a + 2 * (b - a));
        //check if b is missing
        int bx = (a + ((c - a) / 2));
        //check if a is missing
        int ax = ((b - (c - b)));
        if(cx % c == 0 && (b-a) == (cx - b) && cx > 0) cout << "YES" << nl;
        else if(bx % b == 0 && (bx-a) == (c - bx) && bx > 0) cout << "YES" << nl;
        else if(ax % a == 0 && (b-ax) == (c - b) && ax > 0) cout << "YES" << nl;
        else cout << "NO" << nl;
        // cout << ax << " " << bx << " " << cx << nl;
        
    }

    return 0;
}