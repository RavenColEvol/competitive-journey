#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define rep(i, a, b) for(ll i = a; i < b; ++i)
using namespace std;
typedef long long ll;
typedef vector<ll> vll;

int main()
{
	FIO;
    ll n, x; cin >> n >> x;
    vll arr(n);
    for(ll& i : arr) cin >> i;
    sort(arr.begin(), arr.end());

    ll cnt = 0;

    for(ll i = 0, j = n-1; i < n; ) {
        if(i >= j) {
            cnt += n - i - cnt;
            break;
        }

        if(arr[i] + arr[j] <= x) {
            cnt += 1;
            i++, j--;
        }else {
            j--;
        }
    }

    cout << cnt << '\n';

	return 0;
}