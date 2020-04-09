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

    int t, a, b, c, d, x, y, x1, x2, y1, y2;
    int netx, nety;
    test(t) {
        bool flag = true;
        cin >> a >> b >> c >> d;
        cin >> x >> y >> x1 >> y1 >> x2 >> y2;
        // if(+) net right else left
        netx = a - b + x;
        // if(+) net up else down
        nety = d - c + y;
        if(netx < x1 || netx > x2)
            flag = false;
        if(nety < y1 || nety > y2)
            flag = false;
        if(flag)
            cout << "Yes\n";
        else cout << "No\n";
    }

	return 0;
}