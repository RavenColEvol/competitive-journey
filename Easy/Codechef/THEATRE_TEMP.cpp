#include<bits/stdc++.h>
#define flashio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define rep(i,n) for(int i = 0; i < n; i++)
using namespace std;
typedef long long ll;

int main()
{
	flashio;
	
	ll days, total_profit = 0 ;
	cin >> days ;

	while(days--)
	{
		ll requests, profit = INT_MIN;
		cin >> requests;
		ll arr[4][4] = {0};
		
		for(int i = 0; i < requests; i++) {
			char movie ;
			int time;
			cin >> movie >> time;
			arr[movie - 'A'][time/3 - 1]++;
		}

		rep(i,4) {
			rep(j, 4) {
				if(i != j) continue;
				rep(k,4){
					if(k==i||k==j) continue;
					rep(l,4) {
						if(l==k||l==j||l==i) continue;
						vector<int> temp = {arr[i][0], arr[j][1], arr[k][2], arr[l][3]};
						sort(temp.begin(),temp.end());
						for(int i : temp) {
							
						}
					}
				}
			}
		}

		cout << profit << '\n';
		total_profit += profit;
	}
	
	cout << total_profit << '\n';

	return 0;
}