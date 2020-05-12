#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef long long ll;

int main()
{
	FIO;
	ll t; cin >> t;
    bool dp[100005] = {0};
    while(t--) {
        ll n, ans = 0, temp;
        cin >> n;
        memset(dp, false, sizeof dp);
        for(ll i = 0; i < n; i++) {
            cin >> temp; 
            if(dp[temp] == false) ans++, dp[temp] = true;
        }
        cout << ans << '\n';
    }
	return 0;
}