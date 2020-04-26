#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef long long ll;

int main()
{
	FIO;
    int t, n, mx = INT_MIN;

	auto solve = [&]() {
        cin >> n;
        vector<int> arr(n);

        for(int& i : arr) cin >> i;

        int gcd = 0;
        for(int i = 0; i < n; i++) gcd = __gcd(gcd, arr[i]);

        if(gcd == 1) cout << -1 << '\n';
        else {
            int ans = gcd;
            for(int i = 2; i * i <= gcd; i++) {
                if(gcd % i == 0) {
                    ans = i;
                    break;
                }
            }
            cout << ans << '\n';
        }
    };

    cin >> t;
    while(t--) {
        solve();
    }
	return 0;
}