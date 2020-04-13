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

int main(){
	optimize
    ll t, n ; cin >> t;
    string x, tmp;
    while(t--) {
        cin >> x;
        tmp = x;
        n = x.size();
        rep(i, n/2) {
            tmp[n - i - 1] = tmp[i];
        }

        if(tmp > x) {
            cout << tmp << '\n';
            continue;
        }

        repr_r(i, (n-1)/2 + 1) {
            if(tmp[i] != '9') {
                tmp[i]++;
                break;
            }
            tmp[i] = '0';
        }
       
        rep(i, n/2) {
            tmp[n - i - 1] = tmp[i];
        }

        if(tmp[0] == '0') {
            tmp[n-1] = '1';
            tmp = '1' + tmp;
        }
        cout << tmp << '\n';
    }
	return 0;
}