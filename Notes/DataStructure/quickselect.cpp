#include<bits/stdc++.h>
using namespace std;

int partition(int arr[], int l, int r)	{
	
	int x = arr[r], i = l;
	for(int j = l; j <= r - 1; j++)	{
		if(arr[j] <= x) {
			swap(arr[i], arr[j]);
			i++;
		}
	}
}

int main()
{
	
	
	return 0;
}