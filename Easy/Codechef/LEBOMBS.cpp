#include<bits/stdc++.h>
#define ll long long
#define lli long long int
#define ull unsigned long long
#define pf printf
#define sf scanf
#define forn(n) for(int i = 0; i < n ; i++)
#define test while(t--)
#define MOD 1000000007
#define flashio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main()
{
	flashio
	// Your code here
	int t ;
	cin >> t;
	
	test {
		int n;
		string s;
		cin >> n >> s;
		int safe = 0;
		forn(n) {
			
			if(i==0){
				if(s[i]=='1'&&s[i+1]!='1')
					s[i+1] = '2';
			}
			else if(i==n-1){
				if(s[i]=='1'){
					s[i-1] = '2';
				}
			}
			else if( s[i] == '1'){
				s[i-1] = '2'; 
				if(s[i+1]!='1')
				s[i+1] = '2';
			}
		}
		forn(n) {
			if(s[i]=='0') safe++;
		}
		cout << safe << endl;
	}

	return 0;
}