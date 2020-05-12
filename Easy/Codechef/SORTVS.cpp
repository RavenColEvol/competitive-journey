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

ll n, m, x, y;

bool dfs(vector<vll> pos, int start, int end, vector<bool>& visited) {
    if(start == end) {
        return true;
    }
    visited[start] = true;
    bool flag = false;
    for(int i : pos[start]) {
        if(visited[i]) continue;
        return dfs(pos, i, end, visited);
    }
    return flag;
}

bool connected(vector<vll> pos, int start, int end) {
    vector<bool> visited(n+1, false);
    return dfs(pos, start, end, visited);
}

int main(){
	optimize
    ll t; 
    test(t) {
        n, m, x, y; cin >> n >> m;
        vll arr(n + 1);
        vector<vll> pos(n+1);
        for(ll i = 1; i <= n; i++) cin >> arr[i];
        for(int i = 1; i <= m; i++) {
            cin >> x >> y;
            pos[x].push_back(y);
            pos[y].push_back(x);
            if(arr[x] > arr[y]) swap(arr[x], arr[y]);
        }
        
        // for(int i = 0; i < pos.size() ; i++) {
        //     cout << i << '-';
        //     for(ll j : pos[i]) cout << j << ' ';
        //     cout << '\n';
        // }
        //cout << connected(pos, 1, 2) << '\n';
        // for(ll i : arr) cout << i << ' ';
        // cout << '\n';

        ll c = 0;
        for(ll i = 1; i < n; ) {
            if(arr[i] == i) i++;
            else {
                if(!connected(pos, i, arr[i]))
                    c++;
                swap(arr[i],arr[arr[i]]);
            }
        }
        cout << c << '\n';
    }
	return 0;
}