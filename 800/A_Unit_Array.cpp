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
        int m = 0, p = 0;
        for(int i=0;i<n;i++) {
            int v;
            cin >> v;
            if(v == -1) m++;
            else p++; 
        }
        int temp = 0;
        if(m > n/2) {
            temp = m - n/2;
        }
        m = m - temp;
        cout << (m%2 == 0 ? temp : temp+1) << nl;
    }

    return 0;
}

/*

-1 -1 1 -1
m = 3
n/2 = 2

m  > n/2
temp = 3 - 2 = 1

m = 3 - 1 = 2




*/