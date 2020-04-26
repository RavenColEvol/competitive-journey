#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef long long ll;
const int MOD = 998244353;

ll printNcR(ll n, ll r) 
{
    long long p = 1, k = 1; 
    if (n - r < r) 
        r = n - r; 
    if (r != 0) { 
        while (r) { 
            p = (p*n) % MOD; 
            k *= r; 
            long long m = __gcd(p, k); 
            p /= m; 
            k /= m; 
            n--; 
            r--; 
        }  
    } 
    else
        p = 1;
    return p % MOD;
} 

ll solve(ll n) {
    ll  sum = 0;
    for(ll i = 1; i <= n; i++) {
        sum = (sum + printNcR(n, i)) % MOD;
    }
    return sum;
}

int main()
{
	FIO;
	ll t; cin >> t;
    while(t--) {
        ll n, mx = INT_MIN; cin >> n;
        map<ll, ll> mp;
        for(ll i = 0; i <  n; i++) {
            ll temp; cin >> temp;
            mx = max(temp, mx);
            mp[temp]++;
        }
        
        ll total = solve(n), ans = 1;
        ll remaining = total;
        for(ll i = 1; i < 100005; i++) {
            if(mp.find(i) == mp.end()) {
                ans += i * total;
                ans %= MOD;
                break;
            }
            ans += i * (total - solve(mp[i]));
        }
        cout << ans << '\n';
    }
	return 0;
}