#include<bits/stdc++.h>
#define flashio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef long long ll;
int main()
{
	flashio;
	
	ll days, profit, requests, time, total_profit = 0;
	char movie;
	cin >> days;

	while(days--) {
		ll arr[4][4] = {0};
		profit = 0;

		cin >> requests;

		for(int i = 0; i < requests; i++) {
			cin >> movie >> time;
			arr[movie-'A'][time/3 - 1]++;
		}

		ll max_request[4] = {0};
		bool time_slot[4] = {0}, movie_slot[4] = {0};
		
		for(int i = 0; i < 4; i++) {
			int m = 0, n = 0, val = INT_MIN;

			for(int j = 0; j < 4; j++) {
				if(movie_slot[j] == false){
					for(int k = 0; k < 4; k++) {
						if(time_slot[k] == false){
							if( val < arr[j][k]){
								val = arr[j][k];
								m = j, n = k;
							}
						}
					}
				}	
			}
			
			movie_slot[m] = time_slot[n] = 1;
			max_request[i] = val;
		}

		sort(max_request, max_request + 4, greater<ll>());

		for(int i = 0, j = 100; i < 4; i++, j -= 25) {
			if(max_request[i] == 0)
				profit -= 100;
			else
				profit += j * max_request[i];
		}

		cout << profit << endl;
		total_profit += profit;
		
	}
	cout << total_profit << endl;
	return 0;
}