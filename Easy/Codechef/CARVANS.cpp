#include<bits/stdc++.h>
using namespace std;


int main()
{
	int t, n, arr[10005], count;
	scanf("%d",&t);
	while(t--) {
		scanf("%d",&n);
		for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
		count = 1;
		for(int i = 1; i < n; i++) arr[i] < arr[i-1] ? ++count : (arr[i] = arr[i-1]);
		printf("%d\n", count);
	}
	return 0;
}