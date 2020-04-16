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

bool isprime(ll n) {
    if(n <= 1) return false;

    if(n == 2 || n == 3) return true;

    if(n % 2 == 0) return false;

    for(ll i = 3; i*i <= n; i+=2) if(n % i == 0) return false;

    return true;
}

int main(){
	optimize
    ll n; cin >> n;
    ll x, y, z; 
    for(ll i = n; i > 1; i--) {
        if(isprime(i)) {
            x = i; break;
        }
    }
    if(x == n) {
        cout << 1 << '\n' << x ;
        return 0;
    }
    for(ll j = 2; j <= n - x; j++) {
        if(!isprime(j)) continue;
        if(x+j == n) {
            cout << 2 << '\n' << x << ' ' << j;
            return 0;
        }
        for(ll k = 2; k <= n - x - j; k++) {
            if(!isprime(k)) continue;
            if(x+j+k == n) {
                cout << 3 << '\n' << x << ' ' << j << ' ' << k;
                return 0;
            }
        }
    }
	return 0;
}