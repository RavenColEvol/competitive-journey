#include<bits/stdc++.h>
#define ll long long
#define lli long long int
#define ull unsigned long long
#define test while(t--)
#define MOD 1000000007

using namespace std;

int main()
{
	lli n,m;
	cin>>n>>m;
	lli temp = m, count= 0;
	while(n!=0){
		++count;
		--n; // morning
		if(count==temp){ // evening
			n+=1;
			temp+=m;
		}
	}
	cout<<count;
	return 0;
}