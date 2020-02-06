#include<iostream>
using namespace std;

const int N = 100000 + 5;

int main()
{
	int t, n;
	scanf("%d%d", &t, &n);
	
	int arr[N] = {0}, dp[N] = {0};
	for(int i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	int q;
	scanf("%d", &q);
	for(int i = 0; i < q ; i++)
	{
		int l, r;
		scanf("%d%d", &l ,&r);
		l--, r--;
		bool flag = false;
		for(int i = l; i <= r; i++)
			if(arr[i]%2 == 0)
			{
				flag = true;
				break;
			}
		if(flag) printf("EVEN\n");
		else printf("ODD\n" );
	}

	return 0;
}