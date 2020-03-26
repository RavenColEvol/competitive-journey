#include<bits/stdc++.h>
#define test(t) for(cin>>t;t;--t)
#define rep(i,n) for(ll i=0;i<n;i++)
#define repr(i,k,n) for(ll i=k;i<n;i++)
#define repr_r(i,n) for(ll i=n-1;i>=0;i--)
#define pb push_back
#define f first
#define sec second
#define in cin>>
#define out cout<<
#define optimize ios_base::sync_with_stdio(0);cin.tie(NULL);
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef pair<ll,ll>pll;

bool isvalid(int val, int digits) {
    while(val) {
        val /= 10;
        digits--;
    }
    return digits == 0;
}

int main(){
	optimize

    int n, m; cin >> n >> m;
    vector<int> arr(n,0);
    while(m--) {
        int s, c; cin >> s >> c;
        arr[s-1] = c;
    }

    int val = 0, base = 1;
    for(auto i = arr.rbegin(); i != arr.rend(); i++) {
        val += *i * base;
        base *= 10;
    }

    if(isvalid(val,n)) {
        cout << val ;
    }
    else cout << -1;

	return 0;
}