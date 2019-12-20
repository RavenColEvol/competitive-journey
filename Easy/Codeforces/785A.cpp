#include<bits/stdc++.h>
#define ll long long
#define lli long long int
#define ull unsigned long long
#define test while(t--)
#define MOD 1000000007

using namespace std;

int main()
{
	map<string,int> mp;
	mp["Tetrahedron"] = 4;
	mp["Cube"] = 6;
	mp["Octahedron"] = 8;
	mp["Dodecahedron"] = 12;
	mp["Icosahedron"] = 20;

	ll t; cin>>t;
	ull answer = 0;
	test {
		string s;
		cin>>s;
		answer+=mp[s];
	}
	cout<<answer;
	return 0;
}