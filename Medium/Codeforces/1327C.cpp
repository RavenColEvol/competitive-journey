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

int main(){
	optimize

    int n, m, k, x, y; cin >> n >> m >> k;
    rep(i, (2*k)) {
        cin >> x >> y;
    }

    cout << ( n*m + n + m - 3) << '\n';
    rep(i,n-1) cout << 'U';
    rep(i,m-1) cout << 'L';
    rep(i,n)
    {
        if(i!=0) cout << 'D';
        if(i%2 == 0)
            rep(j,m-1) out 'R';
        else rep(j,m-1) out 'L';
    }
	return 0;
}