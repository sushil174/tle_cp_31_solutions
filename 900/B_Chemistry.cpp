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
        int n,k;
        cin >> n >> k;
        string s;
        cin >> s;
        int freq[26] = {0};
        for(char c : s) {
            freq[c - 'a']++;
        }
        int temp = (n - k);
        int count = 0;
        for(int i=0;i<26;i++) {
            if(freq[i] % 2) count += freq[i] - 1;
            else count += freq[i];
        }
        if(temp == 1) cout << "YES" << nl;
        else {
            if(count >= temp) {
                cout << "YES" << nl;
            } else {
                cout << ((temp % 2 != 0 && temp - count == 1) ? "YES" : "NO") << nl;
            }
        }

    }

    return 0;
}

