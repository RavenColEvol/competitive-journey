#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define rep(i, a, b) for(ll i = a; i < b; ++i)
using namespace std;
typedef unsigned long long ll;
typedef vector<ll> vll;

int main()
{
	FIO;
    vector< pair<string, int> > st;
    string s, temp = "", q;
    cin >> s >> q;
    int n = s.size(), m = q.size();
    for(int c = n-1; c >= 0; c--) {
        temp = s[c] + temp;
        st.push_back({temp, c});
    }
    sort(st.begin(), st.end());
    for(auto i : st) {
        if(i.first.substr(0, m) == q) {
            cout << i.second << ' ';
        }
    }
	return 0;
}