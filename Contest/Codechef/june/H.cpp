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
    ll r; cin >> r;
    char x, y;
    vector<pll> arr;

    arr.push_back(make_pair(1, r));
    while(1) {
        
        ll mid = arr[0].f + ((arr[0].sec - arr[0].f) >> 1) + 1;
        cout << mid << '\n';
        cin >> x;
        if(x == 'E') {exit(0);}

        if(arr.size() == 1) {
            ll quater = arr[0].f + ((arr[0].f + arr[0].sec) >> 2);
            cout << quater << '\n';

            cin >> y;
            if(y == 'E') {exit(0);}

            if(x == y) {
                if(x == 'G') {
                    arr[0].f = quater;
                } else arr[0].sec = mid - 1;
            } else {
                arr.push_back({mid + 1, arr[0].sec});
                arr[0].sec = quater - 1;
            }
        }
        else {
            ll mid2 = (arr[1].f + arr[1].sec) >> 1;
            cout << mid2 << '\n';

            cin >> y;
            if(y == 'E') {exit(0);}

            if(x == y) {
                if(x == 'G') {
                    arr[0] = arr[1];
                    arr.pop_back();
                    arr[0].f++;
                }
            } else {
                arr.pop_back();
                arr[0].sec--;
            }
        }
    }
	return 0;
}