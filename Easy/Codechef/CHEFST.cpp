#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef long long ll;

int main()
{
	FIO;
	ll t; cin >> t;
    while(t--) {
        ll a, b, c; cin >> a >> b >> c;
        cout << max({a + b - (c * (c + 1)), a-b, b-a}) << '\n';
    }
	return 0;
}