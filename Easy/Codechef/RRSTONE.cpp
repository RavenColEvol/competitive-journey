#include<bits/stdc++.h>
#define flashio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

void update(vector<long long>& vi){
	long long maxi = LONG_MIN;
	for(long long& i : vi) maxi = max(maxi, i);
	for(long long& i : vi) i = maxi - i;
}

int main()
{
	flashio
	// Your code here
	long long n, k;
	cin >> n >> k;
	vector<long long> vi(n);
	for(long long& i : vi) cin >> i;

	if(k > 0)
	{
		update(vi);
		if(k % 2 == 0) {
			update(vi);
		}
	}

	for(long long i : vi) cout << i << ' ';

	return 0;
}