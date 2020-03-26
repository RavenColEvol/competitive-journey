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

bool category(string s) {
    bool foundnum = false;
    for(char i = 1; i < s.size(); i++) {
        if( s[i] <= '9' && s[i] >= '0') foundnum = true;
        if( foundnum && s[i] == 'C' ) return true; 
    }
    return false;
}

string solve(string s) {
    string output = "";
    int temp, n = s.size()-2;
    int i = s.find('C');
    temp = stoi(s.substr(i+1,s.size()));
    while(temp) {
        output += (temp / pow(26,n)) + 'A' - 1;
        temp = temp % pow(26,n);
        n--;
    }
    output += s.substr(1,i-1);
    return output;
}

string solverc(string s) {
    int index = -1, temp = 0, m = 1;
    string output = "";
    for(int i = 0; i < s.size(); i++) {
        if(s[i] <= '9' && s[i] >= '0') {
            index = i; break;
        }
    }
    output += "R" + s.substr(index,s.size());
    for(int i = index - 1; i >= 0 ; i--, m*= 26) {
        temp += (s[i] - 'A' + 1)*m;
    }
    output += "C" + to_string(temp);
    return output;
}

int main(){
	optimize
    int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        bool type = category(s);
        if(type) {
            cout << solve(s) << '\n';
        }
        else cout << solverc(s) << '\n';
    }
	return 0;
}