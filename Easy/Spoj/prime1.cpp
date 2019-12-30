#include<bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i <= b ; i++)
#define fastio ios::sync_with_stdio(0); cin.tie(0);
#define MAX 100001
typedef long long ll;

using namespace std;

vector<int> primes()
{
	vector<int> sieve(MAX, 1);
	sieve[0] = sieve[1] = 0;
	for(int i = 2; i*i <= MAX ; i++)
	{
		if(sieve[i] == true)
		{
			for(int j = i + i; j < MAX; j+= i)
				sieve[j] = false;
		}
	}

	vector<int> prime;
	prime.push_back(2);
	for(int i = 3; i < MAX; i+=2)
		if(sieve[i] == true)
			prime.push_back(i);

	return prime;
}

void printPrime(ll l, ll r, vector<int> primes)
{
	vector<int> sieve(r - l + 1 , 1);

	for(int i = 0; primes[i]*(ll)primes[i]<=r; i++)
	{
		int prime = primes[i];
		int lower = (l/prime)*prime;
		if(lower < l)
			lower += prime;
		for(int i = lower; i <= r; i+=prime)
		{
			sieve[lower - l] = false;
		}
		if(lower == prime)
			sieve[lower] = true;
	}

	for(int i = 0; i < r-l+1; i++)
	{
		if(sieve[i])
			cout << l + i;
	}
}

int main()
{
	fastio
	
	int t;
	cin >> t;
	vector<int> prime = primes();
	while(t--)
	{
		long long l, r;
		cin >> l >> r;
		printPrime(l, r, prime);
	}
	return 0;
}