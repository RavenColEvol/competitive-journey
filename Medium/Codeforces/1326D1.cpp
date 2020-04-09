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
#define debug(t) cout << t << endl
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef pair<ll,ll>pll;

int zalgo(string s) {
    if(s.size() == 0) return 0;
    vector<int> dp(s.size());
    int i = 0, j = 0, k = 0;
    string t = s;
    reverse(s.begin(), s.end());
    for(int i = 0 ; i < s.size(); i++) {
        j = 0, k = i;
        while(t[j] == s[k] && j < s.size() && k < s.size()) {
            k++,j++;
        }
        dp[i] = j;
    }
    return *max_element(dp.begin(),dp.end());
}

string solve(string s) {
    int len = s.size();
    if(len == 1) return s;

    int i = 0, j = len - 1;
    while(s[i] == s[j] && i < j) { i++, j--;}

    string ans = s.substr(0, i);

    string temp = s.substr(i , len - 2*i );

    string prefix = s.substr(i , zalgo(temp));
    reverse(temp.begin(), temp.end());
    string suffix = s.substr(len - i - zalgo(temp), zalgo(temp));
    
    if(prefix.size() > suffix.size())
        ans += prefix;
    else ans += suffix;

    ans += s.substr(len - i, len);
    
    return ans;
}

int main(){
	optimize

    int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        cout << solve(s) << '\n';
    }

	return 0;
}