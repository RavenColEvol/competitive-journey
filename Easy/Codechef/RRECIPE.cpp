#include<bits/stdc++.h>
using namespace std;

const int MOD = 1e7 + 9;

int t, ans;
char arr[1000007];

int main()
{
	scanf("%d", &t);
	while(t--) {
		scanf("%s", arr);
		ans = 1;
		int len = strlen(arr);
		for(int i = 0, j = len - 1; i <= j; i++, j--) {
			if( arr[i] != arr[j] && arr[i] != '?' && arr[j] != '?') {
				ans = 0;
				break;
			}
			else if( arr[i] == arr[j] && arr[j] == '?')
				ans = (ans * 26) % MOD;
		}
		printf("%d\n", ans );
	}
	return 0;
}