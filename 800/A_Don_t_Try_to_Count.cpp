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
        int n,m;
        cin >> n >> m;
        string s1, s2;
        cin >> s1 >> s2;
        if(n >= m) {
            if(s1.find(s2) != string::npos) {
                cout << 0 << nl;
            } else {
                s1.append(s1);
                if(s1.find(s2) != string::npos) {
                    cout << 1 << nl;
                } else {
                    cout << -1 << nl;
                }
            }
        } else {
            int value = n;
            int count = 0;
            while(n < m) {
                n *= 2;
                s1.append(s1);
                count++;
            }
            if(s1.find(s2) != string::npos) {
                cout << count << nl;
            } else {
                s1.append(s1);
                if(s1.find(s2) != string::npos) {
                cout << count + 1 << nl;
                } else {
                   cout << -1 << nl;
                }
            }
        }
    }

    return 0;
}


/*
abb
babba

abb abb abb abb 

3 5
abb

6

abba

*/