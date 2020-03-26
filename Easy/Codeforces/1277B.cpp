#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
        int n, ans = 0; cin >> n;
        set<int> s;
        for(int i = 0; i < n; i++) {
            int temp ; cin >> temp;
            s.insert(temp);
        }

        while(!s.empty()) {
            int m = *s.rbegin();
            s.erase(m);
            if(m % 2 == 0) {
                ans++;
                s.insert(m/2);
            }
        }

        cout << ans << '\n';
    }

    return 0;
}