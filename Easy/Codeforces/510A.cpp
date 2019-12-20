#include<bits/stdc++.h>
#define ll long long
#define lli long long int
#define ull unsigned long long
#define test while(t--)
#define MOD 1000000007

using namespace std;

int main()
{
	ll m,n ; cin>>m>>n;
	for(int i = 1 ; i<=m ;i++)
	{
		if(i&1){
			for(int j = 1;j<=n;j++)
			{
				cout<<"#";
			}
		} else {
			if( (i/2)&1 ){
				for(int j = 1;j<n;j++) cout<<".";
				cout<<"#";
			} else {
				cout<<"#";
				for(int j = 1;j<n;j++) cout<<".";	
			}
		}
		cout<<endl;
	}
	return 0;
}