#include<bits/stdc++.h>
#define ll long long
#define lli long long int
#define ull unsigned long long
#define test while(t--)
#define MOD 1000000007

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL); 
	cout.tie(NULL);

	ll n , k;
	cin >> n >> k;

	ll i;

	for( i = 1 ; 1 ; i++) {
		if( n*i % 10 == 0 || n*i % 10 == k ) {
			break;
		}
	}
	
	cout << i ;

	return 0;
}