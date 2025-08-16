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
        ll n, k , x;
        cin >> n >> k >> x;
        ll total = (n * (n + 1) / 2);
        if(x > total) cout << "NO" << nl;
        else {
            ll a = (n-k) * ((n - k) + 1) / 2;
            ll maxs = total - a;
            ll mins = k * (k + 1) / 2;
            if(x >= mins && x <= maxs) cout << "YES" << nl;
            else cout << "NO" << nl;
        }
    }

    return 0;
}


/*
1 2 3 4 5 = 15

3 4 5 = 12 

11 = 4 5 2
10 = 4 5 1
9 = 4 3 2
8 = 5 2 1
7 = 4 1 2
6 = 1 3 2



get the sum of first k numbers that is smallest value we can form with k distinct elements
the get the sum of last k numbers that is larget value we can form with k distinct elements

then check if x lies between them if yes then true else false


*/