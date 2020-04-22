#include<bits/stdc++.h>
#define test(t) for(cin>>t;t;--t)
#define rep(i,n) for(ll i=0;i<n;i++)
#define repr(i,k,n) for(ll i=k;i<n;i++)
#define repr_r(i,n) for(ll i=n-1;i>=0;i--)
#define mp make_pair
#define pb push_back
#define f first
#define sec second
#define in cin>>
#define out cout<<
#define endl '\n'
#define optimize ios_base::sync_with_stdio(0);cin.tie(NULL);
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef pair<ll,ll>pll;

ll solve(vll arr, ll index = 0, ll elems = 1, ll val = 0) {
    if(index == arr.size() - 1 && elems % 2 == 0) return val;
    if(index == arr.size() - 1) return INT_MIN;

    for(ll i = index; i < arr.size(); i++) {
        if(arr[index] < 0 && arr[i] >= 0) {
            return max(solve(arr, i + 1, elems + 1, val + arr[index]) , solve(arr, i + 1, elems, val))
        }
    }

}

int main(){
	optimize
    ll t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        vector<ll> arr(n);
        for(ll & i : arr) cin >> i;
        cout << solve(arr) << '\n';
    }
	return 0;
}