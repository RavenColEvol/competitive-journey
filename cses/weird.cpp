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
    ll sum = 0LL, x;
    rep(i, 0, n-1) {
        cin >> x;
        sum += x;
    }
    cout << (n * (n+1))/2 - sum ;
	return 0;
}