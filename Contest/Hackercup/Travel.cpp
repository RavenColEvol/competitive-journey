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

string inc, o;

char is_flight(ll src, ll des) {
    if(o[src] == 'Y' and inc[des] == 'Y') return 'Y';
    return 'N';
}

void solve() {
    ll n; cin >> n;
    cin >> inc >> o;
    char f[51][51];
    memset(f, '.', sizeof(f));
    rep(i, n) {
        rep(j, n) {
            if(i == j) f[i][j] = 'Y';
            if(abs(i-j) == 1) f[i][j] = is_flight(i, j);
        }
    }
    rep(i, n) {
        rep(j, n) {
            if(j > i + 1) {
                if(f[i][j-1] == 'N') f[i][j] = 'N';
                else f[i][j] = is_flight(j-1, j);
            } 
        }
    }
    rep(i, n) {
        repr_r(j, n) {
            if(j < i - 1) {
                if(f[i][j+1] == 'N') f[i][j] = 'N';
                else f[i][j] = is_flight(j+1, j);
            }
        }
    }
    rep(i, n) {
        rep(j, n) op << f[i][j];
        op << '\n';
    }
}

int main(){
	optimize
    op.open("travel.txt");
    ll t; cin >> t;
    rep(i, t) {
        op << "Case #" << i + 1 << ":\n";
        solve(); 
    }
	return 0;
}