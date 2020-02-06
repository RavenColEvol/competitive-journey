#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n , m, c;
	scanf("%d%d%d", &n, &m, &c);
	long long villa = 0, villb = 0;
	for(int i = 0; i < n; i++)
	{
		int x, y, temp;
		scanf("%d%d%d", &x, &y, &temp);
		if(y - m*x - c < 0)
			villa += temp;
		if(y - m*x - c > 0)
			villb += temp;
	}

	printf("%lld", max(villa, villb));

	return 0;
}