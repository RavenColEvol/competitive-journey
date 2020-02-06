#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> vi(4);
	for(int& i : vi)
		cin >> i ;
	sort(vi.begin(), vi.end(), greater<int>());
	for(int i = 1; i < 4; i++)
		cout << vi[0] - vi[i] << ' ';
	return 0;
}