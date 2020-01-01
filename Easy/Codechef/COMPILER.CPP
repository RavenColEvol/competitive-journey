#include<bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i <= b ; i++)
#define fastio ios::sync_with_stdio(0); cin.tie(0);

typedef long long ll;

using namespace std;

void solve();

int main()
{
	fastio
	
	int t;
	cin >> t;

	while(t--)
		solve();

	return 0;
}

void solve()
{
	string s;
	cin >> s;
	
	int count = 0, answer = 0;

	stack<char> stk;

	for(char c : s)
	{
		if(c=='<')
	     stk.push('<');
	     else if(c=='>')
	     {
	         if(!stk.empty()&&stk.top()=='<')
	         {stk.pop();count+=2;
	             if(stk.empty()){answer+=count;count=0;}
	         }
	         else  
	         break;
	     }
	}

	cout << answer << '\n';
}