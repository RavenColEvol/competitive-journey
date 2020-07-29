#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define rep(i, a, b) for(ll i = a; i < b; ++i)
using namespace std;
typedef long long ll;
typedef vector<ll> vll;

ll solve(vll ar, ll n, ll a = 0, ll b = 0) {
    if(n == 0) return abs(a-b);
    return min(solve(ar, n-1, a + ar[n-1], b), solve(ar, n-1, a, b+ ar[n-1]));
}

int main()
{
	FIO;
    ll n; cin >> n;
    vector<ll> ar(n);
    for(ll& i : ar) cin >> i;
    cout << solve(ar, n);
	return 0;
}