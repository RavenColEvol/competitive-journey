#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef long long ll;

int main()
{
	FIO;
	ll t; cin >> t;
    while(t--) {
        ll n, q; cin >> n >> q;
        vector<ll> arr(n);
        for(ll i = 0; i < n; i++) {
            cin >> arr[i];
        }
        for(ll i = 0; i < n - q; i++) {
            for(ll j = i + q; j < n; j+= q) {
                if(arr[i] > arr[j]) swap(arr[i], arr[j]);
            }
        }

        if(is_sorted(arr.begin(), arr.end())) {
            cout << "yes\n";
        }
        else cout << "no\n";
    }
	return 0;
}