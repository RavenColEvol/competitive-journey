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

vector<int> dp(32,0);

void setbit(ll n) {
    for(int i = 0; i < 32; i++) {
        if(n == 0) return;
        if((n>>i)&1) dp[i]++;
    }
}

ll nct(ll n) {
    return (n * (n-1)) / 2;
}

int main(){
	optimize
    ll n, temp, ans = 0;
    cin >> n;
    while(n--) {
        cin >> temp;
        setbit(temp);
    }
    for(int i = 0; i < 32; i++) {
        ans += nct(dp[i])*(1<<i);
    }
    cout << ans << '\n';
	return 0;
}