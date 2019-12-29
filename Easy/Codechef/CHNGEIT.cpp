#include<iostream>
#include<map>
using namespace std;

int main()
{
	int t; 
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		map<int,int> mp;
		for(int i = 0;i<n;i++)
		{
			int temp = 0;
			cin >> temp;
			if(mp[temp]==0)
				mp[temp] = 1;
			else
				mp[temp]++;
		}
		int max = 0;
		for(auto i:mp)
		{
			if(i.second>max)
				max = i.second;
		}
		cout << n - max << endl;
	}
	return 0;
}