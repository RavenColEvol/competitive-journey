#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef long long ll;

int main()
{
	FIO;
	ll n, k, p; cin >> n >> k >> p;
    vector<ll> arr(n);
    for(ll& i : arr) cin >> i;

    vector<ll> tmp = arr;
    vector<ll> dsu(n, 0);
    
    sort(tmp.begin(), tmp.end());
    
    for(ll i = 1; i < n; i++)
    {
        if(tmp[i] - tmp[i-1] <= k) dsu[i] = dsu[i-1];
        else dsu[i] = i;
    }

    for(ll i = 0; i < p; i++) {
        ll a, b; cin >> a >> b;
        ll x = lower_bound(tmp.begin(), tmp.end(), arr[a-1]) - tmp.begin();
        ll y = lower_bound(tmp.begin(), tmp.end(), arr[b-1]) - tmp.begin();
        if(dsu[x] == dsu[y]) cout << "Yes\n";
        else cout << "No\n";
    }
    return 0;
}