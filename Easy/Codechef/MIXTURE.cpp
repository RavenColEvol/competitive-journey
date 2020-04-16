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
#define optimize ios_base::sync_with_stdio(0);cin.tie(NULL);
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef pair<ll,ll>pll;

const ll MAX = 1005;

vll arr(MAX);
vector<vll> dp(MAX, vll(MAX, -1));

ll sumof(ll i, ll j) {
    ll sum = 0;
    repr(x, i, j+1) {
        sum += arr[x];
        sum %= 100;
    }
    return sum;
}

ll get(ll start, ll end) {
    if(start >= end) return 0;

    if(dp[start][end] != -1) return dp[start][end];

    dp[start][end] = INT_MAX;

    repr(i, start, end + 1) {
        dp[start][end] = min(dp[start][end], (
            get(start, i) + get(i + 1, end) + sumof(start, i)*sumof(i+1, end)
        ));
    }
    
    return dp[start][end];
}

int main(){
	optimize

    ll n;
    while(in n) {
        rep(i, n) in arr[i];

        rep(i, n) rep(j, n) dp[i][j] = -1;

        cout << get(0, n - 1) << endl;
    }

	return 0;
}