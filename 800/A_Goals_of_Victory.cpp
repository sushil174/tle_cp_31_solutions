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
        int sum = 0;
        for(int i=0;i<n-1;i++) {
            int v;
            cin >> v;
            sum += v;
        }   
        cout << sum  * -1<< nl;
    }

    return 0;
}


/*
1 2 3

1 - 2 10 - 4 = 6 x
1 - 3 10 - 5 = 5
            = 11

2 - 1 = -6 x
2 - 3 = 10
        4


3 - 1 = -5
*/