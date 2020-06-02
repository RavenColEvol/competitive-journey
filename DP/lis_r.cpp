#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define rep(i, a, b) for(ll i = a; i < b; ++i)
#define input(arr) for(auto& i : arr) cin >> i;
#define output(arr) for(auto i : arr) cout << i << ' ';
using namespace std;
typedef long long ll;
typedef vector<ll> vll;


int main()
{
	FIO;
    ll n; cin >> n;
    vll arr(n), lis;
    input(arr);
    
    for(ll i : arr) {
        auto k = lower_bound(lis.begin(), lis.end(), i);
        if(k == lis.end()) {
            lis.push_back(i);
        } else {
            *k = i;
        }
    }
    cout << lis.size() << '\n';
	return 0;
}