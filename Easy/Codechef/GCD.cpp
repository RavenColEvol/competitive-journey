#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef long long ll;

const ll N = 1e6 + 5;
int lp[N];
vector<ll> pr;

// compute all prime in linear
void precompute() {
	for (int i=2; i<=N; ++i) {
		if (lp[i] == 0) {
			lp[i] = i;
			pr.push_back (i);
		}
		for (int j=0; j<(int)pr.size() && pr[j]<=lp[i] && i*pr[j]<=N; ++j)
			lp[i * pr[j]] = pr[j];
	}
}

int main()
{
	FIO;
	precompute();
	ll t, n; cin >> t;
	while(t--) {
		cin >> n;
		if(n == 1) cout << 1 << '\n';
		else
		cout << n / 2 << '\n';
		
		cout << (1 + upper_bound(pr.begin(), pr.end(), n) - pr.begin()) << ' ' << 1;
		for(int i = 0; pr[i] <= n; i++) cout << ' ' << pr[i];
		cout << '\n';

		for(int i = 4; i <= n; i += 2) {
			if(binary_search(pr.begin(), pr.end(), i + 1) || i + 1 > n) cout << 1 << ' ' << i << '\n';
			else cout << 2 << ' ' << i << ' ' << i + 1 << '\n';
		}
	}
	return 0;
}