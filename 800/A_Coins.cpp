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
        ll n,k;
        cin >> n >> k;
        if(n % 2 == 0 || (n - k) % 2 == 0) {
            cout << "YES" << nl;
        } else {
            cout << "NO" << nl;
        }
    }

    return 0;
}

/*
    odd + odd = even
    even + even = even
    odd + even = odd


    even + odd = odd

    even * even = even
    even * odd = even
    odd * odd = odd


    k*y must be odd if n is not even
        i can only get odd if i multiply by odd
            so k must be odd ?

    if n is even then 


    even * odd + even * odd = even

*/