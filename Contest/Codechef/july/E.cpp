#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define rep(i, a, b) for(ll i = a; i < b; ++i)
using namespace std;
typedef long long ll;
typedef vector<ll> vll;

const ll mod = 998244353LL;

ll arr[26], wta[500001], t, p, n;
string s;
unordered_map<string, ll> mp, wt, g;
unordered_map<string, vector<string>> sss;

bool possible(string a, string s) {
    for(ll i = 0; i < (ll)s.size(); i++) {
        if(s[i] != a[i % a.size()]) return false;
    }
    return true;
}

ll calc(string a) {
    ll v = 0LL, x = a.size();
    for(ll i = 1; i <= x; i++) {
        string ss = a.substr(0, i);
        if(possible(ss, a)) {
            (v += wt[ss]) % mod;
        }
    }
    return v;
}

ll exgcd(ll a, ll b, ll *x, ll *y) 
{ 
    if (a == 0LL) 
    { 
        *x = 0LL, *y = 1LL; 
        return b; 
    } 
    ll x1, y1; 
    ll gcd = exgcd(b%a, a, &x1, &y1); 
    *x = (y1 - (b/a) * x1)%mod; 
    *y = (x1)%mod; 
    return gcd; 
}

ll mi(ll a, ll m) {
    ll x, y; 
    ll g = exgcd(a, m, &x, &y); 
    return (x%m + m) % m;
}

int main()
{
	FIO;
    cin >> t;
    for(; t--; ) {
        cin >> s;
        n = (ll)s.size();
        
        rep(i, 0, 26) cin >> arr[i];

        rep(i, 0, n) {
            wta[i] += arr[s[i] - 'a'];
            if(i != 0) wta[i] += wta[i-1];
        }

        for(ll i = 0; i <= n; i++) {
            for(ll j = 1; j <= n - i; j++) {
                string ss = s.substr(i, j);
                if(mp.find(ss) == mp.end()) {
                    if(i != 0)
                    wt[ss] = wta[i+j-1] - wta[i-1];
                    else 
                    wt[ss] = wta[i+j-1];
                }
                mp[ss]++;
            }
        }

        p = 0LL;
        for(auto i : mp) {
            (p += calc(i.first) * i.second) %= mod;
        }
        
        cout << (p * mi((n * (n + 1))/2, mod)) % mod << '\n';

        // clear
        mp.clear();
        wt.clear();
        g.clear();
        memset(wta, 0, sizeof(wta));
        memset(arr, 0, sizeof(arr));
    }
	return 0;
}
