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

int main(){
    ll t, n, p, x;
    test(t) {
        vector<vll> arr(1601, vll(1600, 0));
        cin >> n >> p;
        repr(i, 1, n+1) {
            repr(j, 1, n+1) {
                cout << 1 << ' ' << i << ' ' << j << ' ' << i << ' ' << j << '\n';
                cin >> x;
                if(x == -1) return 0;
                arr[i-1][j-1] = x; 
            }
        }
        cout << 2 << '\n';
        rep(i, n) {
            rep(j, n) cout << arr[i][j] << ' ';
            cout << '\n';
        }
        cin >> x;
        if(x == -1) return 0;
    }
	return 0;
}