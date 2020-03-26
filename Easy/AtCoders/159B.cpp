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

bool ispalindrome(string s) {
    int i = 0, j = s.size()-1;
    while(i<j) {
        if(s[i++] != s[j--]) return false;
    }
    return true;
}

int main(){
	optimize
    string s; cin >> s;
    int n = s.size();
    string temp = "";
    bool flag = ispalindrome(s) && ispalindrome(s.substr(0, (n-1)/2)) && ispalindrome(s.substr((n+1)/2, n));
	if(flag) cout << "Yes";
    else cout << "No";
    return 0;
}