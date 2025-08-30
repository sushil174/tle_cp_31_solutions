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
        ll k,n;
        cin >> k >> n;
        ll m = n % 4;
        int temp = k % 2;
        if(m == 0) cout << k << nl;
        else {
            if(m == 2) cout << (temp ? k - 1 : k + 1) << nl;
            else {
                if(m == 1) {
                    cout << (temp ? k + n : k - n) << nl;
                } else {
                    if(temp) {
                        cout << k - 1 - n << nl;
                    } else cout << k + 1 + n << nl;
                    // cout << (temp ? ((k - 1) - n) : (k  + 1 + n)) << nl;
                }
            }
        }
    }

    return 0;
}


/*

odd + odd = even

odd + even = odd

odd - odd = even

odd - even = odd

even - even = even




10 10

10 is even so

10 - 1 = 9 o
9 + 2 = 11 o
11 + 3 = 14 e
14 - 4 = 10 e
10 - 5 = 5 o
5 + 6 = 11 o 
11 + 7 = 18 e 
18 - 8 = 10 e
10 - 9 = 1 o 
1 + 10 = 11 o
11 + 11 = 22 e
22 - 12 = 10 e


9 + 1 = 10 e
10 - 2 = 8 e
8 - 3 = 5 o
5 + 4 = 9 o
9 + 5 = 14 e
14 - 6 = 8 e
8 - 7 = 1 o
1 + 8 = 9 o
9 + 9 = 18 e
18 - 10 = 8 e
8 - 11 = -3 o
-3 + 12 = 9 o




95 
96 = 10
97
98 = 11
99
100 = 10



*/