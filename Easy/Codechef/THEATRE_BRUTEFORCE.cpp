#include<bits/stdc++.h>
#define flashio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define rep(i,n) for(int i = 0; i < n; i++)
using namespace std;
typedef long long ll;

ll solve(ll arr[4][4], vector<ll> val){
	ll profit = 0;
	vector<ll> temp = {arr[val[0]][0],arr[val[1]][1],arr[val[2]][2],arr[val[3]][3]};
	sort(temp.begin(), temp.end(), greater<ll>());
	for(int i = 0,j = 100; i < 4; i++, j-= 25){
		profit += (temp[i] == 0 ? -100 : temp[i]*j);
	}
	return profit;
}

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

		vector<ll> val = {0,1,2,3};

		do{
			profit = max(profit, solve(arr, val));
		}while(next_permutation(val.begin(),val.end()));

		cout << profit << '\n';
		total_profit += profit;
	}
	
	cout << total_profit << '\n';

	return 0;
}