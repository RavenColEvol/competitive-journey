#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define rep(i, a, b) for(ll i = a; i < b; ++i)
using namespace std;
typedef unsigned long long ll;
typedef vector<ll> vll;

string v = "aeiou";

int mincost(char c) {
    int ans = 26;
    for(char x : v) {
        ans = min(abs(x - c), ans);
    }
    return ans;
}

bool isv(char c) {
    for(char x : v) {
        if(x == c) return true;
    }
    return false;
}

int main()
{
	FIO;
    ll t; cin >> t;
    while(t--) {
        string s; cin >> s;
        ll ans = 0;
        for(char x : s) {
            if(!isv(x)) {
                ans += mincost(x);
            }
        }
        cout << ans << '\n';
    }
	return 0;
}