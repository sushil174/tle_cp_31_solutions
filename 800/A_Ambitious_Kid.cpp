#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"
#define vi vector<int>

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int c = INT_MAX;
    for(int i=0;i<n;i++) {
        int v;
        cin >> v;
        if(abs(v) < abs(c) ){
            c = abs(v);
        }
    }
    cout << c << nl;
    

    return 0;
}