#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define rep(i, a, b) for(ll i = a; i < b; ++i)
using namespace std;
typedef long long ll;
typedef vector<ll> vll;

int main()
{
	FIO;
    ll n, t, a , b; 
    cin >> n;
    vector<bool> check(n+1);
    t = n;
    n = ((n * (n + 1)) >> 1);
    if(n&1) {
        cout << "NO\n";
    }
    else {
        cout << "YES\n";
        n >>= 1;
        a = 0;
        while(t) {
            if(n >= t) {
                check[t] = true;
                a++;
                n -= t;
            }
            t--;
        }
        cout << a << '\n';
        for(ll i = 1; i <= check.size(); i++) {
            if(check[i]) cout << i << ' ';
        }
        cout << '\n';
        cout << check.size() - a - 1 << '\n';
        for(ll i = 1; i <= check.size()-1; i++) {
            if(!check[i]) cout << i << ' ';
        }
        cout << '\n';
    }
	return 0;
}