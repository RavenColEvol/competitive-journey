#include<iostream>
#include<cmath>
using namespace std;

int solve(int n, int p, int num)
{
	if(pow(num,p)<n)
		return solve(n,p,num+1) + solve(n-pow(num,p),p,num+1);
	if(pow(num,p)==n)
		return 1;
	return 0;
}

int main()
{
	int n,p;
	cin >> n >> p;
	cout << solve(n,p,1);
	return 0;
}