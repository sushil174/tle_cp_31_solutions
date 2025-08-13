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
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        if(d > b || (d == b && c <= a)) {
            int temp = d - b;
            if(a + temp < c) {
                cout << -1 << nl;
            }else {
                int ans = temp + ((a+temp) - c);
                cout << ans << nl;
            }
        } else {
            cout << -1 << nl;
        }
    }

    return 0;
}



/* 
if y == 0 then -1 
    only possible if x <= start_pos_x

y < 0 not possible

now how to get ans 
    first we need to make y equals 


    2 -1 -1 -1

*/