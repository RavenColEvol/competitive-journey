#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long int ll;
typedef long double ld;

set<int> arr;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(NULL);
	
	int t;
	
	cin >> t;
	while(t--){
		int n;
		
		cin >> n;
		
		string str = "zyxwvutsrqponmlkjihgfedcba";
		string ans = "";
		
		while(n >= 25){
			n -= 25;
			ans += str;
		}
		
		if(n > 0){
		
			for(int i = 25; i >= 25 - n; i--)
				ans = str[i] + ans;
		}
		
		cout << ans << endl;
		
	}
	
	return 0;
} 