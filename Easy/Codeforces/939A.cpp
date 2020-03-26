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

    int n, arr[5005];

    cin >> n;
    repr(i,1,n+1) cin >> arr[i];
    for(int i = 1; i <= n; i++) {
        if( i == arr[arr[arr[i]]]) {
            cout << "YES\n";
            return 0;
        }
    }

    cout << "NO\n";

	return 0;
}