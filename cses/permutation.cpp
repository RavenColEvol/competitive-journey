#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define rep(i, a, b) for(ll i = a; i < b; ++i)
using namespace std;
typedef unsigned long long ll;
typedef vector<ll> vll;

int main()
{
	FIO;
    ll n; cin >> n;

    if(n == 1) cout << "1";

    else if(n <= 3) cout << "NO SOLUTION";

    else {
        for(ll i = 2; i <= n; i+=2) {
            cout << i << ' ';
        }
        for(ll i = 1; i <= n; i+=2) {
            cout << i << ' ';
        }
    }

	return 0;
}