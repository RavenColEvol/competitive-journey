#include<bits/stdc++.h>
#define test(t) for(cin>>t;t;--t)
#define rep(i,n) for(ll i=0;i<n;i++)
#define repr(i,k,n) for(ll i=k;i<n;i++)
#define repr_r(i,n) for(ll i=n-1;i>=0;i--)
#define pb push_back
#define f first
#define sec second
#define in cin>>
#define out cout<<
#define optimize ios_base::sync_with_stdio(0);cin.tie(NULL);
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef pair<ll,ll>pll;

ll zalgo(vector<ll> arr, ll index) {

    vector<ll> temp = arr;
    ll n = arr.size();
    
    reverse(temp.begin(), temp.end());
    
    ll count = 0;

    for(ll i = index, k = 0; i < (n - index); i++) {
        k = i;
        while(k < (n - index) && arr[k] == temp[k]) k++;
        count = max(count, k - i );
    }

    return count;
}

ll solve(vector<ll> arr) {
    ll i = 0, j, n = arr.size();
    j = n-1;
    while(i < j && arr[i] == arr[j] ) i++, j--;
    ll v1 = zalgo(arr, i);
    reverse(arr.begin(), arr.end());
    ll v2 = zalgo(arr, i);
    return 2*i + max(v1, v2);
}

int main(){
	optimize
    ll t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        vector<ll> arr(n);
        for(ll& i : arr) cin >> i;
        cout << solve(arr) + 1 << '\n';
    }
	return 0;
}