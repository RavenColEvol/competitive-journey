#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef long long ll;

int main()
{
	FIO;
	ll t, temp; cin >> t;
    while(t--) {
        ll n, ans = 0, z = 0, o = 0, t = 0; cin >> n;
        
        for(ll i = 0; i < n; i++) {
            cin >> temp;
            if(temp > 2) ans += i - z - o;
            else if(temp == 1) o++;
            else if(temp == 0) z++;
            else if(temp == 2) ans += i - o - z - t,t++;
        }
        cout << ans << '\n';
    }
	return 0;
}