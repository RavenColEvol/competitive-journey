#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define rep(i, a, b) for(ll i = a; i < b; ++i)
using namespace std;
typedef long long ll;
typedef vector<ll> vll;

int main()
{
	FIO;
    ll n; cin >> n;
    vll arr(n);
    for(ll& i : arr) cin >> i;
    ll c = 0;
    for(ll i = n-1; i >= 1; i--) {
        for(ll j = 0; j < i; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                c++;
            }
        }
    }
    cout << c << '\n';
	return 0;
}