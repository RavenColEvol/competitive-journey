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

ll gcd(ll a, ll b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
}

ll lcm(ll a, ll b) {
    return (a * b)/ gcd(a, b);
}

ll solve(vll arr) {
    vector<ll> jumps;
    ll n = arr.size();
    for(ll i = 1; i <= n; i++) {
        ll j = 1, at = arr[i-1];
        while(at != i) {
            at = arr[at-1];
            j++;
        }
        //cout << j << endl;
        jumps.push_back(j);
    }
    ll x = 1;
    for(ll i : jumps) {
        x = lcm(x, i);
    }
    return x;
}

int main(){
	optimize
    ll t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        vll arr(n);
        for(ll& i : arr) cin >> i;
        cout << solve(arr) << '\n';
    }
	return 0;
}