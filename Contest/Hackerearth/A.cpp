#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, k;
	cin >> n >>k;
	
	vector<int> vi(n);
	
	for(int& i : vi)
		cin >> i;

	int count = 0;
	for(int i = 0; i < n; i++)
	{
		if(vi[i] <= k){
			count++;
		}
		else {
			break;
		}
	}
	for(int i = n - 1 ; i >= 0; i--)
	{
		if(vi[i] <= k)
			count++;
		else {
			break;
		}
	}

	if(count > n)
		cout << n << endl;
	else
		cout << n - count << endl;

	return 0;
}