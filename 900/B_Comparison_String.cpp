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
        string s;
        cin >> s;
        char cur = s[0];
        unordered_map<char, int> counter;
        counter[cur]++;
        int total = 2;
        int ans = 1, final = 1;
        for(int i=1;i<n;i++) {
            // char c = s[i];
            // char other = (cur == '<' ? '>' : '<');
            // if(c == cur) {
            //     // counter[c]++;
            //     if(counter[other] < 1) total += 1;
            //     else counter[other]--;
            //     counter[c] = counter[other];
            // }else {
            //     if(counter[cur] < 1) total += 1;
            //     else counter[cur]--;
            //     cur = c;
            //     counter[cur]++;
            // }

            if(s[i] == s[i-1]) ans++;
            else ans = 1;
            final = max(final, ans);
        }
        cout << final + 1 << nl;
    }

    return 0;
}

/*
< < > >

cur = <
    total = 2

*/