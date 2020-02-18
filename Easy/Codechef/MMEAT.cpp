#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int t, n, count;
	long long int m, arr[10];
	scanf("%d", &t);
	while(t--) {
		scanf("%d%lld", &n, &m);
		count = 0;
		for(int i = 0; i < n; i++) scanf("%lld", &arr[i]);
		sort(arr, arr + n, greater<long long>());
		while(m > 0 && count < n)
			m -= arr[count++];
		if(m > 0)
			printf("-1\n");
		else
			printf("%d\n",count);
	}
	return 0;
}