#include<bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i <= b ; i++)
#define fastio ios::sync_with_stdio(0); cin.tie(0);

typedef long long ll;

using namespace std;

int main()
{
	fastio
	
	int t;
	cin >> t;

	REP(i, 1, t) {
		set<char> faulty;
		string s;
		cin >> s;

		for(int i = 0; s[i] != '\0'; i++)
		{
			if(s[i] == s[i+1])
			{
				i++;
			}
			else{
				faulty.insert(s[i]);
			}
		}

		for(char c : faulty){
			cout << c ;
		}
		cout << endl;
	}

	return 0;
}