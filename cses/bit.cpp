#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define rep(i, a, b) for(ll i = a; i < b; ++i)
using namespace std;
typedef long long ll;
typedef vector<ll> vll;

const ll mod = 1e9 + 7;

long long be(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            (res *= a) %= mod;
        (a *= a) %= mod;
        b >>= 1;
    }
    return res;
}

int main()
{
	FIO;
    ll n; cin >> n;
    cout << be(2, n) << '\n';
	return 0;
}