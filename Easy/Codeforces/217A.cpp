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

int n, x, y, cc = 0; 
vector<tuple<int,int,bool>> arr;

void dfs(int index) {
    if(get<2>(arr[index]) == 1) return ;
    get<2>(arr[index]) = 1;
    for(int x = 0; x < n; x++) {
        if(get<0>(arr[index]) == get<0>(arr[x]) || get<1>(arr[index]) == get<1>(arr[x])) dfs(x);
    }
}


int main(){
	optimize

    cin >> n;
    rep(i,n) {
        cin >> x >> y;
        arr.push_back(make_tuple(x,y,0));
    }

    rep(i,n) {
        if(get<2>(arr[i]) == 1) continue;
        ++cc;
        dfs(i);
    }

    cout << cc - 1<< '\n';
	return 0;
}