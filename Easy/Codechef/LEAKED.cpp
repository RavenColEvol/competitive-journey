#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef long long ll;

ll t, n, m, k, x, y, c, u;


void solve(){
    cin >> n >> m >> k;
    map<ll,ll> mp;
    vector<ll> count;
    for(ll i = 0; i < n; i++) {
        c = 1, u = -1;
        for(ll j = 0; j < k; j++) {
            cin >> x;
            mp[x]++;
        }
        for(auto x : mp) {
            if(x.second > u) c = x.first, u = x.second;
        }
        count.push_back(c);
        mp = {};
    }
    for(auto i : count) cout << i << ' ';
    cout << '\n';
}

int main()
{
	FIO;
    cin >> t;
    while(t--) {
        solve();
    }
	return 0;
}