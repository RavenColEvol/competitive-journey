#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define rep(i, a, b) for(ll i = a; i < b; ++i)
using namespace std;
typedef long long ll;
typedef vector<ll> vll;

int main()
{
	FIO;
	ll n;
    cin >> n;
    vll arr(n);
    for(ll& i : arr) cin >> i;
    if(n <= 2) cout << n << '\n';
    else {
        ll i = 0, x = 2, ans = 0;
        while(i < n - 2) {
            if(arr[i] + arr[i + 1] == arr[i + 2])
                x++, i++;
            else {
                ans = max(x, ans);
                x = 2, i++;
            }
        }
        ans = max(x, ans);
        cout << ans << '\n';
    }
	return 0;
}
