#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define rep(i, a, b) for(ll i = a; i < b; ++i)
using namespace std;
typedef unsigned long long ll;
typedef vector<ll> vll;

ll solve(ll arr[], ll k , ll n, ll v) {
    if(k == 0) return ;
}

int main()
{
	FIO;
    ll n, k; cin >> n >> k;
    ll arr[n];
    for(ll i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << solve(arr, k, n, arr[0]) << '\n';
	return 0;
}