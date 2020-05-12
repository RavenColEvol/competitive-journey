#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef long long ll;

int main()
{
	FIO;
	ll t; cin >> t;
    while(t--) {
        ll n, k; cin >> n >> k;
        vector<ll> arr(n);
        for(ll& i : arr) cin >> i;

        ll sum = accumulate(arr.begin(), arr.end(), 0LL);
        ll c = 0;
        for(ll i : arr) {
            if(sum - i < i + k) c++;
        }
        cout << c << '\n';
    }
	return 0;
}