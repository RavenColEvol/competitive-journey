#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define rep(i, a, b) for(ll i = a; i < b; ++i)
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
map<ll, ll> mp;

int main()
{
	FIO;
	ll t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        ll m = 0;
        vector<ll> arr(n);
        rep(i, 0, n) cin >> arr[i], m = max(arr[i], m);
        ll k = 0;
        string op = "";
        rep(i, 0, m + 1) op += 'a';
        cout << op << '\n'; 
        rep(i, 0, n) {
            rep(j, 0, m + 1)  {
                if(j < arr[i]) cout << op[j];
                else {
                    op[j] = char('a' + (op[j] - 'a' + 1) % 26);
                    cout << op[j];
                }
            }
            cout << '\n';
        }
    }
	return 0;
}
