#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define rep(i, a, b) for(ll i = a; i < b; ++i)
using namespace std;
typedef unsigned long long ll;
typedef vector<ll> vll;

int main()
{
	FIO;
    string s; cin >> s;
    int ans = 1, cc = 1;
    for(int i = 1; i < s.size(); i++) {
        if(s[i] == s[i-1]) cc++;
        else cc = 1;
        ans = max(ans, cc);
    }
    cout << ans;
	return 0;
}