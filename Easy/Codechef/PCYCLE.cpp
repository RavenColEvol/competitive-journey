#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int n ;
	cin >> n;
	int arr[n];
	for(int& i:arr)
		cin >> i;

	vector< vector<int> > ans;
	vector< int > v;
	bool isvisited[n] = {false};

	for( int i = 0; i < n ;i++)
	{
		if(isvisited[i] == false)
		{
			v.push_back(i+1);
			isvisited[i] = true;
			int j = arr[i];
			while(j != i+1)
			{
				isvisited[j-1] = true;
				v.push_back(j);
				j = arr[j-1];
			}
			v.push_back(j);
			ans.push_back(v);
			v.clear();
		}
	}

	cout << ans.size() << endl;
	for(int i = 0; i < ans.size(); i++)
	{
		for(int j = 0; j<ans[i].size(); j++){
			cout << ans[i][j] << ' ';
		}
		cout << '\n';
	}
	return 0;
}