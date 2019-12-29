#include<iostream>
using namespace std;

void printTable(int n, int i) 
{
	if( i == 13 )
		return;
	cout << n << 'x' << i << '=' << (n * i) << endl;
	printTable(n, i + 1);
}

int main()
{
	int n = 5;
	printTable(5,1);
	return 0;
}