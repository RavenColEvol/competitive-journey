#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	// Binet's Formula
	int answer = round( pow((1 + sqrt(5))/2, 10) / sqrt(5) );
	cout << answer << endl;
	return 0;
}