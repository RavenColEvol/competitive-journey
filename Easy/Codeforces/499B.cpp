#include<iostream>
#include<map>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	map<string, string> s;
	for(int i = 0; i<m ; i++){
		string a,b;
		cin >> a >> b;
		s[a] = a.size()<=b.size() ? a : b;
	}
	for( int i = 0; i < n ; i++){
		string word;
		cin >> word ;
		cout << s[word] << ' ';
	}
	return 0;
}