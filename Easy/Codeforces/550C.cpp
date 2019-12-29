#include<bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i <= b ; i++)
#define fastio ios::sync_with_stdio(0); cin.tie(0);

using namespace std;

int main()
{
	fastio
	string s;
	cin >> s;
	for(int i = 0; s[i] != '\0'; i++)
	{
		if((s[i]-'0')%8==0)
		{
			cout << "YES" << endl;
			cout << s[i] << endl;
			return 0;
		}
		for(int j = i; s[j] !='\0'; j++)
		{
			for(int k = j; s[k] !='\0'; k++){
				if(j!=i&& k!=j)
				{
					string temp = "";
					temp.push_back(s[i]);
					temp.push_back(s[j]);
					temp.push_back(s[k]);
					if(stoi(temp)%8 == 0)
					{
						cout << "YES" << endl;
						cout << temp << endl;
						return 0;
					}
				}
			}	
		}
	}
	cout << "N0" << endl;
	return 0;
}