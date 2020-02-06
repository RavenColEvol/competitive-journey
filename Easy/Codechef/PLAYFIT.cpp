#include<bits/stdc++.h>
#define flashio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

using namespace std;

int main()
{
	flashio;
	// YOUR CODE HERE.
	int t, n, a, b, answer = 0;
	cin >> t;
	while(t--) {
		answer = 0;
		cin >> n >> a;
		for(int i = 1; i < n; i++ ) {
			cin >> b;
			a = min(a, b);
			answer = max(answer,b - a);
		}
		if(answer)
			cout << answer << '\n';
		else
			cout << "UNFIT" << '\n';
	}
	
	return 0;
}