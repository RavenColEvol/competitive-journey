#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef long long ll;

int main()
{
	FIO;
	ll t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        vector<ll> arr(1<<n);
        for(ll& i : arr) cin >> i;

        vector<ll> ans;
        priority_queue<ll> q;
        for(ll i : arr) q.push(i);
        for(auto i : q) cout << *i  << ' ';

    }
	return 0;
}