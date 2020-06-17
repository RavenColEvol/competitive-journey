#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef long long ll;

bool ispronic(ll v) {
    if(v == 0) return false;

    ll r = (ll)(sqrt(v));

    return r * (r + 1) == v;
}

int main()
{
	FIO;
    string s; cin >> s;
    vector<ll> ans;
    ll n = s.size();
    for(ll i = 0; i < n; i++) {
        for(ll j = 0; j < n; j++) {
            ll v = stol(s.substr(i, j+1));
            if(ispronic(v)) {
                ans.push_back(v);
            }
        }
    }
    if(ans.empty()) cout << "-1\n";
    else {
        sort(ans.begin(), ans.end());
        vector<ll> temp;
        temp.push_back(ans[0]);

        for(ll i  = 1; i < ans.size(); i++) {
            if(ans[i] != ans[i-1]) temp.push_back(ans[i]);
        }
        
        for(ll i = 0; i < temp.size() - 1; i++) cout << temp[i] << ',';
        cout << temp[temp.size()-1];
        cout << '\n';
    }
	return 0;
}