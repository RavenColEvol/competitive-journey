#include<bits/stdc++.h>
#define ll long long
#define lli long long int
#define ull unsigned long long
#define pf printf
#define sf scanf
#define end '\n'
#define forn(n) for(int i = 0; i < n ; i++)
#define test while(t--)
#define MOD 1000000007
#define flashio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main()
{
	flashio
	// Your code here
	string s;
	cin >> s;
	ll answer = 0;
	forn(s.size()){
		if( i == 0){
			answer += min(s[i]-'a',26-(s[i]-'a'));
		}
		else {
			answer += min(abs(s[i]-s[i-1]),26-abs(s[i]-s[i-1]));
		}
	}
	cout << answer << end;
	return 0;
}