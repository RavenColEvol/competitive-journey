#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define rep(i, a, b) for(ll i = a; i < b; ++i)
using namespace std;
typedef long long ll;
typedef vector<ll> vll;

int main()
{
	FIO;
    ll n, m, k; cin >> n >> m >> k;
    vll s(n), r(m);
    for(ll& i : s) cin >> i;
    for(ll& i : r) cin >> i;
    sort(s.begin(), s.end());
    sort(r.begin(), r.end());

    ll c = 0, i = 0, j = 0;
    while(i < n && j < m) {
        if(abs(s[i]-r[j]) <= k) {
            c++;
            i++, j++;
        } else {
            if(s[i] > r[j]) j++;
            else i++;
        }
    }
    cout << c << '\n';
	return 0;
}