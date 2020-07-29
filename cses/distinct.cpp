#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define rep(i, a, b) for(ll i = a; i < b; ++i)
using namespace std;
typedef long long ll;
typedef vector<ll> vll;

int main()
{
	FIO;
    ll n; cin >> n;
    vll arr(n);
    for(ll& i : arr) cin >> i;
    sort(arr.begin(), arr.end());
    ll ans = 1;
    for(ll i = 1; i < n; i++) {
        if(arr[i] != arr[i-1]) ans++;
    }
    cout << ans << '\n';
	return 0;
}