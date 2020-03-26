#include <bits/stdc++.h>
#define test(t) for (cin >> t; t; --t)
#define rep(i, n) for (ll i = 0; i < n; i++)
#define repr(i, k, n) for (ll i = k; i < n; i++)
#define repr_r(i, n) for (ll i = n - 1; i >= 0; i--)
#define pb push_back
#define f first
#define sec second
#define in cin >>
#define out cout <<
#define optimize                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;

int main()
{
    optimize 
    ll n, m = INT_MAX,si;
    cin >> n;
    vector<ll> arr(n);
    rep(i,n) {
        cin >> arr[i];
        if(arr[i] >= 0) arr[i] = - arr[i] - 1;
        if(m > arr[i]) {
            m = arr[i];
            si = i;
        }
    }

    if(n & 1) {
        arr[si] = -arr[si] - 1;
    }


    for(ll x : arr) cout << x << ' ';

    return 0;
}