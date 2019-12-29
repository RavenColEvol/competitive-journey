#include<iostream>

using namespace std;

int main()
{
	int n, k ;
	cin >> n >> k;

	int count = 0;

	for( int i = 0; i < n ; i++ ) {
		int temp ;
		cin >> temp;
		
		temp += k;
		if( temp <= 5 ) count++;
	}

	cout << count / 3 << endl;

	return 0;
}