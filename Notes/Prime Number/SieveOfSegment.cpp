#include<bits/stdc++.h>
using namespace std;

#define MAX 100001

vector<int> sieve()
{
	vector<bool> isPrime(MAX,true);
	isPrime[0] = isPrime[1] = 0;

	for(int i = 2; i * i < MAX; i++)
	{
		if(isPrime[i]){
			for(int j = i * i; j < MAX; j+=i)
			{
				isPrime[j] = false;
			}
		}
	}

	vector<int> primes;
	primes.push_back(2);
	for(int i = 3; i < MAX; i+=2 ){
		if(isPrime[i])
			primes.push_back(i);
	}

	return primes;
}

void printPrimes(long long l, long long r,vector<int>& primes)
{
	vector<bool> isPrime(r-l+1, true);
	
	for(int i = 0; primes[i]*(long long)primes[i] <= r; i++)
	{
		long long base = (l/primes[i]) * primes[i];
		
		if(base < l)
			base += primes[i];
		
		for(long long j = base; j <= r; j+= primes[i])
		{
			isPrime[j - l] = false;
		}
		if(base == primes[i])
		{
			isPrime[base-l] = true;
		}
	}

	for(int i = 0; i < r-l+1;i++)
		if(isPrime[i])
			cout << l + i << endl;
}


int main()
{
	vector<int> primes = sieve();
	long long l, r;
	cin >> l >> r;
	printPrimes(l, r, primes);
	return 0;
}