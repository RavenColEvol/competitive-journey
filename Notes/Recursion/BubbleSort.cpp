#include<iostream>
using namespace std;

void sort(int arr[], int len)
{
	if(len == 1) return;

	for(int i = len-2; i >= 0; i--)
	{
		if(arr[len-1]<arr[i])
			swap(arr[len-1],arr[i]);
	}

	return sort(arr,len-1);
}

int main()
{
	int arr[] = {5,3,4,2,1,120,55,-1};
	int len = sizeof(arr)/sizeof(arr[0]);
	sort(arr,len);
	for(int i:arr){
		cout << i << endl;
	}
	return 0;
}