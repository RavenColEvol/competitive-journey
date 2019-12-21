#include<bits/stdc++.h>
using namespace std;

void multiply(long long int A[2][2], long long int B[2][2])
{
	long long int a = A[0][0]*B[0][0] + A[0][1]*B[1][0];
	long long int b = A[0][0]*B[0][1] + A[0][1]*B[1][1];
	long long int c = A[1][0]*B[0][0] + A[1][1]*B[1][0];
	long long int d = A[1][0]*B[0][1] + A[1][1]*B[1][1];

	A[0][0] = a ;
	A[0][1] = b ;
	A[1][0] = c ;
	A[1][1] = d ;
}

int fibo(int n) {
	long long int F[2][2] = {
								{1,1},
								{1,0}
							};
	long long int R[2][2] = {{1,0},{0,1}};

	while(n > 0)
	{
		if(n&1)
		{
			multiply(R, F);
		}
		multiply(F, F);
		n >>= 1;
	}

	return R[0][0];
}

int main()
{
	int n;
	cin >> n;
	for(int i = 0;i<=n;i++)
		cout<<fibo(i)<<endl;
	return 0;
}