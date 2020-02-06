#include<bits/stdc++.h>
using namespace std;

int main()
{
	int len ;
	cin >> len;
	
	int arr[len];
	for(int& i : arr)
		cin >> i ;

	for(int i = 0; i < len ; i++)
	{
		bool flag = true;
		for(int j = i + 1; j < len; j++)
		{
			if(arr[j] > arr[i]) {
				for(int k = j + 1; k < len; k++) {
					if( arr[k] < arr[j])
					{
						cout << arr[k] << ' ';
						flag = false;
						break;
					}
				}
				break;
			}
		}
		if(flag)
			cout << -1 << ' ';
	}

	return 0;
}