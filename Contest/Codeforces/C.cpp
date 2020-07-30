#include<bits/stdc++.h>
#define test(t) for(cin>>t;t;--t)
#define rep(i,n) for(ll i=0;i<n;i++)
#define repr(i,k,n) for(ll i=k;i<n;i++)
#define repr_r(i,n) for(ll i=n-1;i>=0;i--)
#define mp make_pair
#define pb push_back
#define f first
#define sec second
#define in cin>>
#define out cout<<
#define endl '\n'
#define optimize ios_base::sync_with_stdio(0);cin.tie(NULL);
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef pair<ll,ll>pll;

int arr[300005], freq[10], n;
string s;
int solveOne(int x) {
	int ans = 0;
	for (int i = 0; i < n; i++)
		if (arr[i] == x)
			ans++;
	return ans;
}

int solveTwo(int x, int y) {
	int ans = 0;
	for(int i = 0; i < n; i++) {
		if(ans&1 and arr[i] == x) {
			ans++;
		}else if(!(ans&1) and arr[i] == y) ans++;
	}
	ans -= (ans & 1);
	return ans;
}

int solve() {
	rep(i, n) {
		arr[i] = (int)(s[i] - '0');
		freq[s[i] - '0']++;
	}
	int ans = *max_element(freq, freq + 10);
	rep(i, 10) {
		rep(j, 10) {
			if(i != j) 
				ans = max(ans, solveTwo(i, j));
		}
	}
	return ans;
}

int main(){
	optimize  
    int t; cin >> t;
    while(t--) {
        cin >> s;
		n = s.size();
        cout << n - solve() << '\n';
    }
	return 0;
}