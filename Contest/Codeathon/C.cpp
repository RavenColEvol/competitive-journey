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
    vector<pair<ll,ll>> arr(n);
    for(pair<ll,ll>& i : arr) cin >> i.first >> i.second;

    if(n <= 2) cout << n ;
    else {
        ll c = 2;
        for(ll i = 1; i < n-1; i++) {
            if(arr[i].first - arr[i].second > arr[i-1].first) {
                c++;
            }
            else if(arr[i].first + arr[i].second < arr[i+1].first) {
                c++;
                arr[i].first += arr[i].second;
            }
        }
        cout << c;
    }
	return 0;
}