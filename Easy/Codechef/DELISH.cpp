#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef long long ll;

int main()
{
	FIO;
	ll t; cin >> t;
    ll arr[10004], maxr[10004], maxl[10004], minr[10004], minl[10004];
    while(t--) {
        int n; cin >> n;
        for(int i = 0; i < n; i++) cin >> arr[i];
        minl[0] = maxl[0] = arr[0];
        minr[n-1] = maxr[n-1] = arr[n-1];
        
        for(int i = 1; i < n; i++) {
            minl[i] = min(arr[i], minl[i-1] + arr[i]);
            maxl[i] = max(arr[i], maxl[i-1] + arr[i]);
        }

        for(int i = n-2; i >= 0; i--) {
            minr[i] = min(arr[i], minr[i+1] + arr[i]);
            maxr[i] = max(arr[i], maxr[i+1] + arr[i]);
        }

        ll ans = 0;
        for(int i = 0; i < n-1; i++) {
            ans = max(ans, abs(minl[i] - maxr[i+1]));
            ans = max(ans, abs(minr[i+1] - maxl[i]));
        }
        cout << ans << '\n';
    }
	return 0;
}