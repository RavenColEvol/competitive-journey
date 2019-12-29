#include<iostream>
using namespace std;

int dp[21][21];

int ways(int x, int y, int n)
{
	if(x == n && y == n)
		return 0;
	if(x == n || y == n)
		return 1;

	if(dp[x][y] != 0)
		return dp[x][y];

	return dp[x][y] = ways(x+1,y, n) + ways(x,y+1, n); 
}

int main()
{
	int n;
	cin >> n;
	cout << ways(0,0, n) << endl;
	return 0;
}