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

	ll t ;
	cin >> t ;

	test {
		ll temp ;
		cin >> temp ;
		ll diff = INT_MAX, q;
		for(int i = sqrt(temp); i>0 ; i-- )
		{
			if(temp%i==0)
			{
				q = temp/i;
				if(diff > abs(i-q) )
					diff = abs(i-q);
			}
		}
		cout << diff << endl;
	}
	
	return 0;
}