#include<bits/stdc++.h>
using namespace std;
 
#define fi first
#define se second
#define FIO {ios::sync_with_stdio(0);cin.tie(nullptr);cout.tie(nullptr);}
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define forn(i, n) for (int i = 0; i < (int)(n); ++i)
#define for1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define ford(i, n) for (int i = (int)(n) - 1; i >= 0; --i)
 
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vpi;
typedef vector<vi> vvi;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef long double ld;
 
int main(){
	FIO
	
	string s;cin >> s;
	deque<char> dq;
	forn(i, s.size())dq.pb(s[i]);
	bool rev = false;
	int q;cin >> q;
	while(q--){
		int t;cin >> t;
		if(t == 1)rev ^= 1;
		else{
			int f;cin >> f;
			char c;cin >> c;
			if(rev){
				if(f == 1)dq.pb(c);
				else dq.push_front(c);
			}
			else {
				if(f == 1)dq.push_front(c);
				else dq.pb(c);
			}
		}
	}
	string ans;
	while(!dq.empty()){
		ans += dq.front();
		dq.pop_front();
	}
	if(rev)reverse(ans.begin(), ans.end());
	cout << ans;
	return 0;
}