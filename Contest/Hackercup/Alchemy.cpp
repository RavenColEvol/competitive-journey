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

ofstream op;
ifstream ip;

char solve() {
    ll n; ip >> n;
    ll a = 0LL, b = 0LL;
    char c;
    rep(i, n) {
        ip >> c;
        c == 'A' ? ++a : ++b;
    }
    
    return abs(a - b) == 1 ? 'Y' : 'N';
}

int main(){
	optimize
    op.open("alchemy.txt");
    ip.open("alchemy_input.txt");
    ll t; ip >> t;
    rep(i, t) {
        op << "Case #" << i + 1 << ": " << solve() << '\n'; 
    }
    op.close();
	return 0;
}