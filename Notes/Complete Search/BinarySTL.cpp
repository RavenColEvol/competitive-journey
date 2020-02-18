#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> arr = {1,2,3,3,3,3,4,5,6,7};
	auto k = equal_range(arr.begin(),arr.end(),3);
	cout << k.second - k.first << endl;
	return 0;
}