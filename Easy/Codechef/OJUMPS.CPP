#include<bits/stdc++.h>

using namespace std;

int main()
{
	long long int n ;
	cin >> n;

	if( n == 0 ) 
		cout << "yes" << endl;
	else 
	{
		while(n>0){
			for( int i = 1; i <= 3 ; i++ )
			{
				n -= i ;
				if( n == 0 ){
					cout << "yes" << endl;
					break;
				}
				if( n < 0 ){
					cout << "no" << endl;
					break;
				}
			}	
		}
	}

	return 0;
}