#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define rep(i, a, b) for(ll i = a; i < b; ++i)
using namespace std;
typedef unsigned long long ll;
typedef vector<ll> vll;

ll cnt = 0;
set<ll> s;

void solve(ll n, ll m) {
    for(ll i = 1; i <= n; i++) {
        for(ll j = 1; j <= m; j++) {
            ll v = i * j + i + j;
            ll b = stoi(to_string(i) + to_string(j));
            if(v == b) {
                s.insert(i);
                cnt++;
            }
        }
    }
}

int main()
{
	FIO;
    ll t; cin >> t;
    while(t--) {
        ll n , m, k = 9LL, c = 0LL;
        cin >> n >> m;
        // solve(n, m);
        // cout << s.size() << ' ' << cnt << '\n';
        while(k <= m) {
            c += n;
            k = k * 10 + 9;
        }
        if(c == 0)
            cout << "0 0" << '\n';
        else
            cout << c << ' ' << n << '\n';
    }
	return 0;
}

// 1000000000 1000000000