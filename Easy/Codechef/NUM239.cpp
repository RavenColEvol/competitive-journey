#include<bits/stdc++.h>
using namespace std;

int main(){
	int t, l, r, ans = 0;
	scanf("%d",&t);
	while(t--){
		ans = 0;
		scanf("%d%d",&l,&r);
		for(int i = l ; i <= r;) {
			int rem = i % 10;
			if(rem==2)
				i++, ans++;
			else if(rem==3)
				i += 6, ans++;
			else if(rem==9)
				i += 3, ans++;
			else
				i++;
		}
		printf("%d\n", ans);
	}
	return 0;
}