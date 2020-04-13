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
const ll MOD = 998244353;

ll mi(ll x, ll p = MOD - 2) {
    if(p == 0) return 1;
    ll res = mi(x, p/2) % MOD;
    if(p & 1) return (res * res * x ) % MOD;
    return (res * res ) % MOD;
}



int main(){
	optimize
    int c[4] = {0};
    for(char i : {'0', '1', 'a', 'A'})
    {
        for(char j : {'0', '1', 'a', 'A'}){
            
            if(i == '0' || j == '0' || (i == 'a' && j == 'A') ||  (i == 'A' && j == 'a')) c[0]++;
            else if(i == '1' && j == '1') c[1]++;
            else if(i == 'a' && j == '1' || i == 'a' && j == 'a' || j == 'a' && i == '1') c[2]++;
            else c[3]++;
        }
    }
    for(int i : c) {
        cout << i << endl;
    }
	return 0;
}