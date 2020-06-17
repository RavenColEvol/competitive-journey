#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define rep(i, a, b) for(ll i = a; i < b; ++i)
using namespace std;
typedef long long ll;
typedef vector<ll> vll;

int main()
{
	FIO;
    ll t;
    cin >> t;
    while(t--) {
        ll n, q; cin >> n >> q;
        vector<ll> arr(n, 0);
        vector<vll> g(102);
        set<pair<ll,ll>> s;
        
        while(q--) {
            string p1, p2; cin >> p1 >> p2;
            ll a = p1[1] - '1', b = p2[1] - '1';
            if(s.find({a, b}) == s.end()) {
                g[a].push_back(b);
                arr[b]++;
            }
        }

        ll cnt = 0, root = -1;
        for(ll i = 0; i < n; i++) {
            if(arr[i] == 0) {
                cnt++;
                root = i;
            }
        }

        if(cnt != 1) {
            cout << "NO\n";
            continue;
        }

        queue<int> Q; Q.push(root);
        vll ans; ans.push_back(root);
        while(!Q.empty()) {
            ll top = Q.front(); Q.pop();
            for(ll i : g[top]) {
                arr[i]--;
                if(arr[i] == 0) {
                    ans.push_back(i);
                    Q.push(i);
                }
            }
        }

        if(ans.size() != n) {
            cout << "NO\n";
            continue;
        }

        cout << "YES\n";
        for(auto i = ans.rbegin(); i != ans.rend(); i++) {
            cout << 'k' << (*i) + 1 << '\n';
        }
    }
	return 0;
}