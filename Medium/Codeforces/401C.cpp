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

void solve(ll n, ll m) {
    if(abs(m-n) <= 1) {
        while(m > 0 || n > 0) {
            if(m>n) {
                if(m--) cout << 1;
                if(n--) cout << 0;
            }
            else {
                if(n--) cout << 0;
                if(m--) cout << 1;
            }
        }
        return ;
    }
    if(m>=2) cout << 11;
    if(n>=1) cout << 0;
    solve(n-1, m-2);
}

int main(){
	optimize

    ll n, m; cin >> n >> m;

    // not possible
    if(m > 2*(n+1) || n > m + 1) {
        cout << -1 << '\n';
        return 0;
    }
    solve(n, m);
	return 0;
}