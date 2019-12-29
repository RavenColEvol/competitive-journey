#include<bits/stdc++.h>
using namespace std;

const int N = 10000000;
int lp[N+1];

int main()
{
	vector<int> pr;

	for(int i = 2; i <=N; ++i)
	{
		if(lp[i] == 0) {
			lp[i] = i;
			pr.push_back(i);
		}
		for(int j = 0; j<pr.size() && pr[j]<=lp[i] && i*pr[j]<=N; j++)
		{
			lp[i*pr[j]] = pr[j];
		}
	}
	for(int i = 0; i < 100; i++)
		cout << pr[i] << endl;
	return 0;
}