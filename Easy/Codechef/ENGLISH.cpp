#include<bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i <= b ; i++)
#define fastio ios::sync_with_stdio(0); cin.tie(0);
#define debug(x) cout << #x << " is " << x << endl;

typedef long long ll;

using namespace std;

bool areSimilar(string a, string b)
{
	ll la = a.length(), lb = b.length();
	if(a[0] == b[0] && a[la-1] == b[lb-1])
		return true;
	return false;
}

ll beauty(string a, string b)
{

	if(a.length() > b.length())
		swap(a,b);

	int lena = a.length() ;
	int lenb = b.length() ;

	if(a == b)
		return lena*lena;

	int front = 0, end = 0;

	for(int i = 0 ; i < lena; i++){
		if(a[i] == b[i])
			front++;
		else 
			break;
	}
	lenb--;
	for(int i = lena - 1; i >= 0; i--, lenb--){
		if(a[i] == b[lenb])
			end++;
		else 
			break;
	}
	return min(front*front, end*end);
}

int main()
{
	fastio
	int test;
	cin >> test;
	
	while(test--)
	{
		int n;
		cin >> n;

		map<string, int> arr;
		for(int i = 0; i < n ; i++)
		{
			string s;
			cin >> s;
			arr[s]++;
		}

		for(auto i : arr)
			cout << i.first << ' ' << i.second << endl;

		vector<string> p;
		long long answer = 0;
		for(auto i : arr)
		{
			if( i % 2 == 0)
				answer += (pow(strlen(i.first),2))
		}
	}

	return 0;
}