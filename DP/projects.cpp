#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define rep(i, a, b) for(ll i = a; i < b; ++i)
using namespace std;
typedef long long ll;
typedef vector<ll> vll;

bool valid(vector< pair<ll,ll> > c, pair<ll,ll> b) {
    for(auto i : c) {
        if(i.first <= b.first && b.first <= i.second or i.first <= b.second && b.second <= i.second)
            return false;
    }
    return true;
}


ll solve(vector< pair<ll,ll> > arr, vector<ll> profit, ll n, vector< pair<ll,ll> > c = {}) {
    if(n == 0) return 0;

    ll exc = solve(arr, profit, n-1, c);

    for(ll i = n - 1; i >= 0; i--) {
        if(valid(c, arr[i])) {
            c.push_back(arr[i]);
            return max(exc, solve(arr, profit, n-1, c) + profit[i]);
        }
    }
    return exc;
}

int main()
{
	FIO;
    ll n; cin >> n;
    vector< pair<ll,ll> > arr(n);
    vector<ll> profit(n);
    rep(i, 0, n) {
        cin >> arr[i].first >> arr[i].second >> profit[i];
    }
    cout << solve(arr, profit, n); 
	return 0;
}