#include<bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i <= b ; i++)
#define size(arr) sizeof(arr)/sizeof(arr[0])
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

		vector<string> arr(n);
		for(string& s : arr)
			cin >> s;

		ll ans = 0;
		vector<bool> visited(n, false);
		for(int i = 0; i < n; i++)
		{
			int max_score = 0, max_index = 0;
			if(!visited[i]){
				for(int j = i + 1; j < n; j++)
				{
					if( !visited[j] && areSimilar(arr[i], arr[j]) ){
						if(max_score < beauty(arr[i], arr[j])){
							max_score = beauty(arr[i], arr[j]);
							max_index = j;
						}
					}
				}
			}
			else
				continue;
			ans += max_score;
			visited[max_index] = true;
		}
		cout << ans << endl;
	}

	return 0;
}