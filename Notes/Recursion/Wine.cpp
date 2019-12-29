#include<bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i <= b ; i++)
#define fastio ios::sync_with_stdio(0); cin.tie(0);

using namespace std;

int bestHelper(int wines[], int day, int start, int end)
{
	if(start > end)
		return 0;
	return max(day * wines[start] + bestHelper(wines,day+1,start+1,end),
	 day * wines[end] + bestHelper(wines,day+1,start,end-1));
}

int best(int wines[], int day)
{
	int wsize = 5;
	return bestHelper(wines, day, 0, wsize - 1);
}

int main()
{
	fastio
	int wines[] = {2,3,5,1,4};
	int day = 1;
	cout << best(wines, day);
	return 0;
}