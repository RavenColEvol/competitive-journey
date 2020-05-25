#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef long long ll;

int n, q, x, i;
string s;

int main()
{
    FIO;
    cin >> n >> s;
    map<char, vector<int>> mp;
    for(i = 0; i < n; i++) {
        mp[s[i]].push_back(i + 1);
    }

    for(auto i : mp) {
        cout << i.first << " : ";
        for(int j : i.second) cout << j << ' ';
        cout << '\n';
    }

    cin >> q;
    while(q--) {
        cin >> x;
        cout << lower_bound(mp[s[x-1]].begin(), mp[s[x-1]].end(), x) - mp[s[x-1]].begin() << '\n';
    }
	return 0;
}


/*
INPUT
9
abacsddaa
2
9
3
*/