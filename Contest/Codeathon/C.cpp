#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define rep(i, a, b) for(ll i = a; i < b; ++i)
using namespace std;
typedef long long ll;
typedef vector<ll> vll;

int main()
{
	FIO;
    ll t, l, i; cin >> t;
    while(t--) {
        string s, to, temp; cin >> l >> s;
        to = s;
        sort(to.begin(), to.end());
        for(ll i = 0; i < l; i++) {
            if(s[i] == to[i]) continue;
            ll pos = s.find_first_of(to[i], i);
            temp = s.substr(0, i) + s.substr(pos, s.size() - pos) + s.substr(i, pos);
            s = temp;
        }
        cout << s << '\n';
    }
	return 0;
}