#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define rep(i, a, b) for(ll i = a; i < b; ++i)
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
const int mod = 1e9 + 7;

ll fact(ll n) {
    if(n == 0 || n == 1) return 1;
    return n * fact(n-1);
}



int main()
{
	FIO;
    ll n, k = 0, ans = 1LL, q = 26;
    cin >> n;
    string s; cin >> s;
    map<char, ll> mp;
    for(char c : s) {
        mp[c]++;
        k++;
    }
    for(int i = 0; i < k + n; i++, q--) {
        ans = (ans * q) % mod;
    }
    
	return 0;
}