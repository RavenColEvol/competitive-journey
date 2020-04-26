#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef long long ll;
const int MAX = 100005;


int main()
{
	FIO;
	ll t, x, n, i, peps; cin >> t;
    while(t--) {
        cin >> n;
        vector<ll> arr(n);
        for(ll & i : arr) cin >> i;
        sort(arr.begin(), arr.end());
        peps = 0;
        for(ll i = 0; i < n; i++) {
            if(peps >= arr[i]) peps++;
            else break;
        }
        cout << peps << '\n';
    }
	return 0;
}