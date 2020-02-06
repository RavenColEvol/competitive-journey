#include<bits/stdc++.h>
#define flashio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main()
{
	flashio
	// Your code here
	int t;
	cin >> t;
	while(t--) {

		long long a, b, temp;
		cin >> a >> b;
		long long answer = LONG_MIN;
		vector<int> vi(a);
		for(int& i : vi) cin >> i;
		for(int& i : vi) {
			cin >> temp;
			long long time = b / i;
			answer = max(answer, temp * time );
		}
		cout << answer << '\n';
	}
	return 0;
}