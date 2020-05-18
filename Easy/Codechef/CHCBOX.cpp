#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef long long ll;

int main()
{
	FIO;
    ll t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        vector<ll> arr(n); 
        for(ll& i : arr) cin >> i;

        ll foccr = max_element(arr.begin(), arr.end()) - arr.begin() + 1;
        ll loccr = n - (max_element(arr.rbegin(), arr.rend()) - arr.rbegin());
        ll ans = (n/2) - (loccr - foccr);
        if(ans > 0) cout << ans << '\n';
        else cout << "0\n";
    }
	return 0;
}