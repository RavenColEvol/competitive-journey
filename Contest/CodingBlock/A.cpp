#include<bits/stdc++.h>
using namespace std;
vector<int> dp(100005, -1);
vector<int> arr;

void wayshelper(int target, int index, int n, int& result)
{
	if(target == 0){
		result++;
		return ;
	}

	for(int i = index; i < n ; i++)
	{
		if(arr[i] <= target)
		{
			wayshelper(target - arr[i], i + 1, n, result);
		}
		else{
			break;
		}
	}
}

int ways(int target, int n)
{
	int result = 0;
	if(dp[target] == -1){
		wayshelper(target, 0, n, result);
		dp[target] = result;
	}
	return dp[target];
}

int main() {
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		int temp;
		cin >> temp;
		arr.push_back(temp);
	}
	
	int q;
	cin >> q;
	sort(arr.begin(), arr.end());
	for(int i = 0; i < q; i++)
	{
		int val, items;
		cin >> val >> items;
		cout << ways(val, n) << endl;
		if(ways(val, n) == items)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}

	return 0;
}