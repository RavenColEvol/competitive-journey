#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define rep(i, a, b) for(ll i = a; i < b; ++i)
using namespace std;
typedef long long ll;
typedef vector<ll> vll;

int main()
{
	FIO;
    ll t; cin >> t;
    while(t--) {
        ll n, p ,ru, l, r; cin >> n;
        vll arr(n);
        for(ll& i : arr) cin >> i;
        r = p = arr[0];
        l = r = 0;
        for(ll i = 1; i < n; i++) {
            if(arr[i] == 0) {
                ru = 1LL;
                continue;
            }
            ru = arr[i]*ru;
            if(ru > p) {
                r = i;
                p = ru;
            }
        }
        ll tp = 1LL, tr = r;
        while(tr >= 0) {
            tp *= arr[tr];
            if(tp == p) break;
            tr--;
        }
        cout << p << ' ' << tr << ' ' << r << '\n';
    }
	return 0;
}