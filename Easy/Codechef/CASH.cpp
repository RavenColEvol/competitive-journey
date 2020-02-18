#include<bits/stdc++.h>
#define flashio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef long long ll;
int main()
{
	flashio;
	ll test, n, k, sum, temp;
	cin >> test;
	while(test--) {
		cin >> n >> k;
		sum = 0;
		for(int i = 0; i < n; i++) {
			cin >> temp;
			sum += (temp % k);
		}
		cout << (sum % k) << '\n';
	}
	return 0;
}