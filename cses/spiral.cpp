#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define rep(i, a, b) for(ll i = a; i < b; ++i)
using namespace std;
typedef long long ll;
typedef vector<ll> vll;

int main()
{
	FIO;
    ll t, x, y, z, v, a;
    cin >> t;
    while(t--) {
        cin >> x >> y;
        z = max(x, y);
        v = (z * (z - 1)) + 1, a = abs(x-y);
        if(x > y) {
            if(x&1) 
                cout << v - a << '\n';
            else cout << v + a << '\n';
        } else {
            if(y&1) 
                cout << v + a << '\n';
            else cout << v - a << '\n';
        }
    }
	return 0;
}