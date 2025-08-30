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
        ll x,y;
        cin >> x >> y;
        ll m = max(x,y);
        ll k = m * m;
        if(m % 2 == 0) { // this means max value will be in row[m][0]
            if(m == x) {
                cout << k - (y - 1) << nl;
            } else {
                cout << ((k - (m - 1)) - (m - 1)) + (x - 1) << nl;
            }
        } else {
            if(m == x) {
                cout << ((k - (m - 1)) -  (m - 1)) + (y - 1) << nl;
            } else {
                cout << k - (x - 1) << nl;
            }
        }
    }

    return 0;
}

/*
1*1
1

2*2
1 2
4 3

3*3
1 2 9 10
4 3 8 11
5 6 7 12
16 15 14 13


for even max numbers are in last row, first col 
    for odd numbers max in last col, first row

for simplisity lets get for x = y = 4

since 4 is even thats means largest will be at [4][0] and [4][1] will be [4][0] - 1 and so on 
    largest in 4 * 4 is 16 so 16 - 3 (we are including 16 also) = 13

for x = 2 and y = 4
we know [4][0] = 16 so [4][4] = 13 and so 13 - 2 = 11

for x = 4 and y = 2
again [4][0] = 16 so 16 - 2 = 14
*/