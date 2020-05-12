#include<bits/stdc++.h>
using namespace std;

int solve(string c, string a, int b) {
    
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(NULL);
    
    int t, n, ans; cin >> t;
    string a, b, c;
    
    while(t--) {
        cin >> a >> b;
        cin >> n;
        vector<pair<string, int>> arr(n);
        c = a + b;
        
        for(auto& s : arr) cin >> s.first >> s.second;

        ans = 0;
        for(auto s : arr) {
            ans += solve(c, s.first, s.second);
        }
    }

    return 0;
}