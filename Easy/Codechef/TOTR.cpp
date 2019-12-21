#include<iostream>
#include<string>

using namespace std;

int main()
{
	int t ; 
	cin >> t;
	string alphabets;
	cin >> alphabets;

	while(t--)
	{
		string conversation, translation = "" ;
		cin >> conversation;
		for( int i = 0; i < conversation.size(); i++ )
		{
			if( conversation[i] <= 'z' && conversation[i] >= 'a' )
				translation += alphabets[ conversation[i] - 'a' ];
			else if( conversation[i] <= 'Z' && conversation[i] >= 'A' )
				translation += 'A' + alphabets[ conversation[i] - 'A' ] - 'a' ;
			else if( conversation[i] == '_' )
				translation += ' ';
			else
				translation += conversation[i];
		}
		cout << translation << '\n';
	}

	return 0;
}