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

bool is_possible(ll d, ll s) {
    return s <= d*9 && s >= 0;
}

int main(){
	optimize

    ll mn = 0, mx = 0;

    ll m, s; cin >> m >> s;
    ll sum = s;
    if(!is_possible(m,s) || (s<=0 && m > 1)) { cout << "-1 -1" ; return 0; } 

    for(ll i = 1; i <= m; i++) {
        for(ll j = 0; j <= 9; j++) {
            if(is_possible(m-i, sum-j) && (i > 1 || j > 0 || (m == 1 && j == 0))) {
                mn = mn*10 + j;
                sum -= j;
                break;
            }
        }
    }

    sum = s;

    for(ll i = 1; i <= m; i++) {
        for(ll j = 9; j >= 1; j--) {
            if(is_possible(m-i, sum-j)) {
                mx = mx*10 + j;
                sum -= j;
                break;
            }
        }
    }

    cout << mn << ' ' << mx << '\n';

	return 0;
}