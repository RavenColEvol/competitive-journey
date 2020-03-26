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
    int n, m, x, y; 
    cin >> n >> m;
    vector< vector<int> > arr(n, vector<int>(n,INT_MAX));
    vector<bool> visited(n,0);
    rep(i, m) {
        cin >> x >> y;
        cin >> arr[x-1][y-1];
    }
    vector<int> path(n) ;
    path[0] = visited[0] = 1;
    
	return 0;
}