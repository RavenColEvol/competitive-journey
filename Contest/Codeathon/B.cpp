#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define rep(i, a, b) for(ll i = a; i < b; ++i)
using namespace std;
typedef unsigned long long ll;
typedef vector<ll> vll;

int main()
{
	FIO;
    ll n; cin >> n;
    string s; cin >> s;
    ll c = 0;
    for(ll i = 1; i < s.size(); i++) 
        if(s[i] == s[i-1]) c++;
    cout << c << '\n';
	return 0;
}