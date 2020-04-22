#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef long long ll;

bool cmp(pair<ll,ll> a, pair<ll,ll> b) {
    if(a.second < b.first) return true;
    return false;
}

int main()
{
	FIO;
	ll t, n; cin >> t;
    while(t--) {
        cin >> n;
        vector<pair<ll,ll>> arr(n);
        for(auto& i : arr) cin >> i.first >> i.second;
        sort(arr.begin(), arr.end(), cmp);
        ll c = 0, at = -1;
        for(ll i = 0; i < n; i++) {
            if(arr[i].first > at) {
                at = arr[i].second;
                c++;
            }
        }
        cout << c << '\n';
    }
	return 0;
}