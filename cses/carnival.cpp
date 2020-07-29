#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define rep(i, a, b) for(ll i = a; i < b; ++i)
using namespace std;
typedef long long ll;
typedef vector<ll> vll;

ll bs(vll h, ll n, ll s , ll e) {
    if(s > e) return -1;
    ll mid = (s + e) >> 1;
    if(h[mid] == n) {
        return mid;
    } 
    if(h[mid] < n && h[mid + 1] > n) {
        return mid;
    }
    if(h[mid] > n) return bs(h, n, mid + 1, e);
    return bs(h, n, s, mid - 1);
}

int main()
{
	FIO;
    ll n, m; 
    cin >> n >> m;
    vll h(n), c(m);
    for(ll& i : h) cin >> i;
    for(ll& i : c) cin >> i;
    sort(h.begin(), h.end());
    for(ll i : c) {
        cout << bs(h, i, 0, n-1) << '\n';
    }
	return 0;
}