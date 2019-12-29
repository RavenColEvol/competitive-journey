#include<bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(0);

using namespace std;

int square(int n)
{
	return n * n;
}

int sumOfSquare(int a, int b)
{
	static int count = 0;
	cout << "I was called " << ++count << " times\n";
	return square(a + b);
}

int main()
{
	int a = 4, b = 2;
	cout << sumOfSquare(a,b) << '\n';
	return 0;
}