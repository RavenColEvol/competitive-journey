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

ll t;

bool solve(ll a,ll p,ll b,ll q,ll c,ll r) {
    ll n = (q * a - p * b), d = (p-q);
    if(d == 0) return false;
    if(n % d != 0) return false;
    ll x = n / d;
    if(a+x == 0 || b + x == 0) return false;
    if(p % (a + x) != 0) return false;
    ll y = p / (a + x);
    if(y == 0) return false;
    return (c + x == r || c * y == r || (c + x) * y == r);
}

bool solvema(ll a,ll p,ll b,ll q,ll c,ll r) {
    ll n = (p-q), d = (a-b);
    if(d == 0) return false;
    if(n % d != 0) return false;
    ll x = n / d;
    ll y = p - (a * x);
    return (c + y == r || c * x == r || (c * x) + y == r);
}

bool am(vll a, vll b) {
    //cout << "add multiply \n";
    return solve(a[0], b[0], a[1], b[1], a[2], b[2]) 
                ||solve(a[1], b[1], a[2], b[2], a[0], b[0]) ||
                solve(a[0], b[0], a[2], b[2], a[1], b[1]);
}

bool ma(vll a, vll b) {
    //cout << "multiply add \n";
    return solvema(a[0], b[0], a[1], b[1], a[2], b[2]) ||solvema(a[1], b[1], a[2], b[2], a[0], b[0]) ||solvema(a[0], b[0], a[2], b[2], a[1], b[1]);
}

bool ad(vll a, vll b) {
    //cout << "add ans \n";
    ll x = b[0] - a[0], y = b[1] - a[1], z = b[2] - a[2];
    return (x == y || x == z || y == z || x + y == z || x + z == y || y + z == x || x== 0 || y == 0 || z == 0);
}

bool pd(vll a, vll b) {
    //cout << "prod \n";
    rep(i, 3) 
        if( a[i] == 0) return false;
    rep(i, 3) {
        if(b[i] % a[i] != 0) return false;
    }
    ll x = b[0] / a[0], y = b[1] / a[1], z = b[2] / a[2];
    return (x == y || x == z || y == z || x * y == z || x * z == y || y * z == x);
}

bool solvesma(ll a, ll p, ll b, ll q, ll c, ll r) {
    if(b==0) return false;
    if(q % b != 0) return false;
    ll x = q / b;
    ll y = r - c;
    //cout << x << ' ' << y << '\n';
    return (a * x == p || a + y == p || a * x + y == p || (a + y) * x == p);
    
}

bool solvesam(ll a, ll p, ll b, ll q, ll c, ll r) {
    if(c==0) return false;
    if(r % c != 0) return false;
    ll x = r / c;
    ll y = q - b;
    //cout << x << ' ' << y << '\n';
    return (a * x == p || a + y == p || a * x + y == p || (a + y) * x == p);
    
}

bool sma(vll a, vll b) {
    //cout << "sma ans \n";
    return solvesma(a[0], b[0], a[1], b[1], a[2], b[2]) ||solvesma(a[1], b[1], a[2], b[2], a[0], b[0]) ||solvesma(a[2], b[2], a[0], b[0], a[1], b[1]);
}

bool sam(vll a, vll b) {
    //cout << "sam ans \n";
    return solvesam(a[0], b[0], a[1], b[1], a[2], b[2]) ||solvesam(a[1], b[1], a[2], b[2], a[0], b[0]) ||solvesam(a[2], b[2], a[0], b[0], a[1], b[1]);
}



int main(){
	optimize
    test(t) {
        vll a(3), b(3);
        
        for(ll& i : a) cin >> i;
        for(ll& i : b) cin >> i;

        ll ex = 0;
        
        map<ll, ll> p, s;

        if(a == b) {
            cout << "0\n";
        } else {
            // handle 1 step
            rep(i, 3) {
                if(a[i] != b[i]) {
                    s[b[i] - a[i]]++;

                    if(a[i] && b[i] % a[i] == 0) {
                        p[b[i] / a[i]]++;
                    } else ex++;
                    
                }
            }

            if((ex == 0 and (ll)p.size() == 1) || (ll)s.size() == 1) {
                cout << 1 << '\n'; continue;
            }
            // handle 2 steps
            if(ad(a, b) || pd(a, b)) {
                cout << 2 << '\n';
                continue;
            }
            if(am(a, b) || ma(a, b)) {
                cout << 2 << '\n';
                continue;
            }
            if(sma(a, b) || sam(a, b)) {
                cout << 2 << '\n';
                continue;
            }
            cout << 3 << '\n';
        }
    }
	return 0;
}
