#include<bits/stdc++.h>
#define flashio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef long long ll;

int inequality(vector<int> coins, int val, int len) {
	for(int i = 0; i < len; i++)
		if(val % coins[i] != 0)
			return i;
	return -1;
}

int main()
{
	flashio;
	ll test, n, p;
	
	cin >> test;
	while(test--) {
		cin >> n >> p;
		bool flag = true;
		vector<int> coins(n);
		map<int, int
		for(int& i : coins) cin >> i;
		vector<int> temp = coins;
		sort(temp.begin(), temp.end(), greater<int>());

		for(int j = 0; j < n && p > 0; j++) {

			int i = inequality(coins, p, n);
			if(i == -1) {
				for(int k = 0; k < n; k++) {
					if(temp[k] < p) {
						int a = inequality(coins, p - temp[k], n) ;
						if(a != -1){
							p -= temp[k];
							answer[a]++;
							break;
						}
						else {
							p-= temp[k];
							answer[]++;
						}
					}
				}
			}
			else {
				answer[i] = p / coins[i] + 1;
				flag = false;
				break;
			}
			
		}
	
		if(flag) {
			cout << "NO" << '\n';
		}
		else {
			cout << "YES" << ' ';
			for(int i : answer)
				cout << i << ' ';
			cout << '\n';
		}
	}
	
	return 0;
}