#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
	ll test, n, ans;
	cin >> test;
	while(test--) {
		cin >> n;
		ans = 0LL;
		vector<int> a(n),b(n);
		for(int& i : a) cin >> i;
		for(int& i : b) cin >> i;
		sort(a.begin(),a.end());
		sort(b.begin(),b.end());
		for(int i = 0; i < n ;i++)
		{
			ans += min(a[i], b[i]);
		}
		cout << ans << '\n';
	}
	return 0;
}