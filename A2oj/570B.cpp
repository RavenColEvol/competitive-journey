#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define rep(i, a, b) for(ll i = a; i < b; ++i)
using namespace std;
typedef long long ll;
typedef vector<ll> vll;

int main()
{
	FIO;
	ll n, m; cin >> n >> m;
    if(n == 1) cout << 1 << '\n';
    else if(n-m > m-1) 
        cout << m + 1 << '\n';
    else cout << m-1 << '\n';
	return 0;
}
