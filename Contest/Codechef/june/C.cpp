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

int main(){
	optimize
    ll t;
    test(t) {
        ll n; cin >> n;
        vll coins(n);
        for(ll& i : coins) cin >> i;
        
        bool possible = true;
        ll t[3] = {0};
        for(ll i : coins) {
            if(i == 5) {
                t[0] += 5;
            } 
            else if(i == 10 && t[0] >= 5) {
                t[0] -= 5;
                t[1] += 10;
            }
            else if(i == 15) {
                if(t[1] >= 10) {
                    t[1] -= 10;
                }
                else if(t[0] >= 10) {
                    t[0] -= 10;
                }
                else {
                    possible = false;
                    break;
                }
            }
            else {
                possible = false;
                break;
            }
        }
        if(possible) cout << "YES\n";
        else cout << "NO\n";
    }
	return 0;
}