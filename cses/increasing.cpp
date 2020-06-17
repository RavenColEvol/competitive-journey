#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define rep(i, a, b) for(ll i = a; i < b; ++i)
using namespace std;
typedef unsigned long long ll;
typedef vector<ll> vll;

int main()
{
	FIO;
    ll n;  cin >> n;
    vll arr(n);
    for(ll& i : arr) cin >> i;
    ll ans = 0LL;
    for(ll i = 1; i < arr.size(); i++) {
        if(arr[i] < arr[i-1]) ans += arr[i-1] - arr[i], arr[i] = arr[i-1];
    }
    cout << ans ;
	return 0;
}