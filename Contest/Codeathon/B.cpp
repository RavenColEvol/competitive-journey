#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define rep(i, a, b) for(ll i = a; i < b; ++i)
using namespace std;
typedef unsigned long long ll;
typedef vector<ll> vll;

ll n, k;

ll solve(vll arr, ll c = 0, ll at = 0) {
    int inx = at;

    for(int i = at + 1; i < at + k + 1; i++) {
        if(i > n) return c + 1;
        if(!(arr[i]&1)) 
            inx = i;
    }

    if(inx == at) return INT_MAX;
    return solve(arr, c+1, inx);
}

ll solveo(vll arr, ll c= 0, ll at = 0) {
    int inx = at;
    for(int i = at + 1; i < at + k + 1; i++) {
        if(i > n) return c + 1;
        if((arr[i]&1))
            inx = i;
    }
    if(inx == at) return INT_MAX;
    return solveo(arr, c+1, inx);
}

int main()
{
	FIO;
    ll t; cin >> t;
    while(t--) {
        n, k; cin >> n >> k;
        vll arr(n+1);
        for(ll i = 1; i <= n; i++) cin >> arr[i];
        ll ans = min(solve(arr), solveo(arr));
        if(ans == INT_MAX)
            cout << -1 << '\n'; 
        else cout << ans << '\n';
    }
	return 0;
}