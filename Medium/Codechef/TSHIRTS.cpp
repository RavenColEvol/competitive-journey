#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef long long ll;

const int mex = 1e9 + 7;
int n, all_person;
string s, temp;
vector<vector<int>> v;
int dp[1024][102] = {};

int query(int mask, int id) {
    if(mask == all_person) return 1;
    if(id >= 101) return 0;

    if(dp[mask][id] != -1) return dp[mask][id];

    int ans = 0;

    ans += query(mask, id + 1);

    for(auto i : v[id]) {
        if( (mask & (1<<i)) == 0 )
            ans = ( ans + query(mask | (1<<i), id+1)) % mex;
    }

    return dp[mask][id] = ans;
}

void solve() {
    cin >> n;
    cin.get(); // consume Enter
    
    v.reserve(110);

    all_person = (1<<n) - 1;

    for(int i = 0; i <= 100; i++) v[i].clear();

    for(int i = 0; i < n; i++) {
        getline(cin, s);
        stringstream ss(s);

        while(ss >> temp) {
            v[stoi(temp)].push_back(i);
        }
    }

    cout << query(0, 1) << '\n';
}

int main()
{
	FIO;
	int t;
    cin >> t ;
    
    while(t--) {
        memset(dp, -1, sizeof dp);
        solve();
    }
	return 0;
}