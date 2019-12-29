#include<iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> ans;
	ans.push_back(1);
	for(int i = 1; i<=1000; i++)
	{
		for(int j=0; j<ans.size(); j++)
		{

			ans[j] = ans[j]<<1;
		}
		for(int j=0; j<ans.size(); j++)
		{
			if(ans[j]>=10)
			{
				if(j+1 == ans.size())
				{
					ans.push_back(0);
				}
				ans[j+1] = ans[j+1] + ans[j]/10;
				ans[j] = ans[j] % 10;
			}
		}
	}
	long long sum = 0;
	for(int i:ans)
		sum += i;
	cout << sum << endl;
	return 0;
}