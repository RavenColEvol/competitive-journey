#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define rep(i, a, b) for(ll i = a; i < b; ++i)
using namespace std;
typedef long long ll;
typedef vector<ll> vll;

int main()
{
	FIO;
    ll t, n, x; cin >> t;
    while(t--) {
        cin >> n;
        ll sum = 0LL;
        for(ll i = 0; i < n; i++) {
            cin >> x;
            sum += x;
        }
        if(sum % n == 0) cout << "Yes\n";
        else cout << "No\n";
    }
	return 0;
}