#include<bits/stdc++.h>
using namespace std;

int main()
{
	string n;
	cin >> n;

	for(int i = 0; n[i]; i++)
		if((n[i]-'0') % 8 == 0){
			cout << "YES" << endl << (n[i]-'0') << endl;
			return 0;
		}

	for(int i = 0; n[i]; i++)
	{
		for(int j = i + 1; n[j]; j++)
		{
			if( ( (n[i]-'0')*10 + (n[j]-'0')) % 8 == 0 ) {
				cout << "YES" << endl << ( (n[i]-'0')*10 + (n[j]-'0')) << endl;
				return 0;
			}
		}
	}


	for(int i = 0; n[i]; i++)
	{
		for(int j = i + 1; n[j]; j++)
		{
			for(int k = j + 1; n[k]; k++)
			{
				if( ((n[i]-'0')*100 + (n[j]-'0')*10 + (n[k]-'0')) % 8 == 0 ) {
					cout << "YES" << endl << ((n[i]-'0')*100 + (n[j]-'0')*10 + (n[k]-'0')) << endl;
					return 0;
				}
			}
		}
	}

	cout << "NO" << endl;
	return 0;
}