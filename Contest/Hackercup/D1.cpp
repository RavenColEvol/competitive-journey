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
#define INF 8000000000000000LL
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef pair<ll,ll>pll;

ofstream op;
ifstream ip;

ll n, m;
map<pll, ll> dp;

ll helper(vll arr, ll fuel, ll at = 0LL, ll cost = 0LL) {
    // if reached destination
    if(at == n-1) {
        return cost;
    }  
    
    // if reached somewhere with no fuel and no gas station
    if(!fuel and !arr[at]) return INF;

    if(dp.find(mp(fuel, at)) != dp.end()) {
        return dp[mp(fuel, at)];
    }

    ll with_fuel = INF, without_fuel = INF;
    if(fuel >= 1)
        without_fuel  = helper(arr, fuel - 1, at + 1, cost);
    if(arr[at])
        with_fuel = helper(arr, m - 1, at + 1, cost + arr[at]);

    return dp[mp(fuel, at)] = min(with_fuel, without_fuel);
}

ll solve() {
    ip >> n >> m;
    vll arr(n);
    for(ll& i : arr) ip >> i;
    ll ans = helper(arr, m);
    dp.clear();
    return  ans == INF ? -1 : ans;
}

int main(){
	optimize
    op.open("op.txt");
    ip.open("running_on_fumes_chapter_1_validation_input.txt");
    ll t; ip >> t;
    rep(i, t) {
        op << "Case #" << i + 1 << ": " << solve() << '\n'; 
    }
	return 0;
}