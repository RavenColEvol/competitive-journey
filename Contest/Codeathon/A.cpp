#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define rep(i, a, b) for(ll i = a; i < b; ++i)
using namespace std;
typedef unsigned long long ll;
typedef vector<ll> vll;

int main()
{
	FIO;
    ll a, b; cin >> a >> b;
    while(b-- && a) {
        if(a % 10 == 0) a /= 10;
        else a -= 1;
    }
    cout << a << '\n';
	return 0;
}