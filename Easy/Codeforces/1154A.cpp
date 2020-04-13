#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll solveHelper(vector<ll> arr, ll begin, ll end) {
	if(is_sorted(arr.begin() + begin, arr.begin() + end)) {
		return end - begin;
	}
	ll mid = (begin + end) / 2;
	return max(solveHelper(arr, begin, mid), solveHelper(arr, mid, end));
}

ll solve(vector<ll> arr) {
	return solveHelper(arr, 0, arr.size());
}

int main()
{
	ll n; cin >> n;
	vector<ll> arr(n);
	for(ll& i : arr) cin >> i;
	cout << solve(arr) << '\n';	
	return 0;
}