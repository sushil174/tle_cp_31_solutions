#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"
#define vi vector<int>

set<pair<int, int>> check(int x, int y, int a, int b) {
    set<pair<int, int>> ans;
    ans.insert({x+a, y+b});
    ans.insert({x-a, y+b});
    ans.insert({x+a, y-b});
    ans.insert({x-a, y-b});

    ans.insert({x+b, y+a});
    ans.insert({x-b, y+a});
    ans.insert({x+b, y-a});
    ans.insert({x-b, y-a});

    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int a,b,ka,kb,qa,qb;
        cin >> a >> b >> ka >> kb >> qa >> qb;

        set<pair<int,int>> ans = check(ka,kb,a,b);
        int count = 0;

        for (auto &p : ans) { 
            set<pair<int,int>> m = check(p.first, p.second, a, b);
            for (auto &q : m) {
                if (qa == q.first && qb == q.second) {
                    // cout << q.first << " " << q.second << nl;
                    count++;
                }
            }
        }

        cout << count << nl;
    }

    return 0;
}
