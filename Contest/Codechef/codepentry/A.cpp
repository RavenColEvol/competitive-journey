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

char opp(char a) {
    return a == 'H' ? 'E' : 'H';
}

int main(){
	optimize
    ll t; cin>>t;
    while(t--) {
        ll n, x, pos; cin >> n >> x;
        char a, b; cin >> a >> b;
        if(a == 'L') cout << x << ' ', pos = x;
        else cout << n - x + 1 << ' ', pos = n - x + 1;
        if(pos&1) cout << b;
        else cout << opp(b);
        cout << '\n';
    }
	return 0;
}