#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef long long ll;

ll sumofall(ll x) {
    return (x*(x+1))/2;
}

int main()
{
	FIO;
	ll t, n;
    
    cin >> t;
    while(t--) {
        cin >> n;
        vector<ll> a(n);
        
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            if(i > 0){
                a[i] += a[i-1];
            }
        }

        vector<pair<ll,ll>> ans;
        for(int i = -1; i < n ; i++) {
            if(i == -1) {
                if(sumofall(n) == a[n-1]) ans.push_back({0,n});
            }
            else if(sumofall(i+1) == a[i] && sumofall(n-i-1) == a[n-1] - a[i]) {
                ans.push_back({i+1,n-i-1});
            }
        }
        cout << ans.size() << '\n';
        for(auto i : ans) cout << i.first << ' ' << i.second << '\n';
    }
	return 0;
}