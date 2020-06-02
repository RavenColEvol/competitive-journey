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
    string s = "banana", temp = "";
    int n = s.size();
    for(int c = n; c >= 0; c--) {
        st.push_back({temp, c + 1});
        temp = s[c-1] + temp;
    }
    sort(st.begin(), st.end());
    for(auto i : st) {
        cout << i.first << ' ' << i.second << '\n';
    }
	return 0;
}