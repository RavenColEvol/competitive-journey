#include<bits/stdc++.h>

using namespace std;

void checkPrime(int n)
{
	if(n == 2 || n == 3) cout << "Prime" << endl;
	else{
		//int a = rand() % (n - 3) + 2;
		if( (long long)pow(2, n - 1) % n == 1 )
			cout << n <<"is Probable Prime" << endl;
		else
			cout << n << "is Not prime" << endl;
	}
	
}

int main()
{
	int n;
	cin >> n;
	for(int i = 2; i <= n; i++)
		checkPrime(i);
	return 0;
}