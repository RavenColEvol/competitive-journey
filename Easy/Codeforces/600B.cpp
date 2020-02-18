#include<bits/stdc++.h>
#define flashio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef long long ll;
int main()
{
	flashio;
	
	ll m,n; cin >> m >> n;
	vector<int> a(m), b(n);
	for(int& i : a) cin >> i ;
	for(int& i : b) cin >> i;

	sort(a.begin(), a.end());
	
	for(int i : b) {
		cout << upper_bound(a.begin(),a.end(),i) - a.begin() << ' ';
	}
	cout << '\n';
	return 0;
}