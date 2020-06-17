#include<bits/stdc++.h>
#define test(t) for(cin>>t;t;--t)
#define rep(i,n) for(ll i=0;i<n;i++)
#define repr(i,k,n) for(ll i=k;i<n;i++)
#define repr_r(i,n) for(ll i=n-1;i>=0;i--)
#define mp make_pair
#define pb push_back
#define f first
#define sec second
#define in cin>>
#define out cout<<
#define endl '\n'
#define optimize ios_base::sync_with_stdio(0);cin.tie(NULL);
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef pair<ll,ll>pll;

ll bf(ll a, ll b) {
    if((b&1) == 1) return 0;
    if((a&1) == 1 && (b&1) == 0) return 1;
    if((a&1) == 0 && (b&1) == 0) return bf(a/2, b/2);
    return 0;
}

int main(){
	optimize
    ll t;
    test(t){
        ll ce = 0, tn, n; cin >> n;
        if(n&1)
        cout << (n-1)/2 <<'\n';
        else {
            tn = n;
            while((tn&1) == 0) tn >>=1, ce++;
            cout << (n)/(1<<(ce + 1)) << '\n';
        }
    }
    
	return 0;
}