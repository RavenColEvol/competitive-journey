#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
	int t;
	cin >> t;

	vector<int> one,two,three;
	for(int i = 0; i<t ;i++){
		int temp ; 
		cin >> temp;
		if(temp==1)
			one.push_back(i+1);
		else if(temp==2)
			two.push_back(i+1);
		else
			three.push_back(i+1);
	}

	int max_group = min({one.size(),two.size(),three.size()});

	if(max_group)
	{
		cout << max_group << endl;
		for(int i = 0;i<max_group;i++){
			cout << one.back() << ' ' << two.back() << ' ' << three.back() << endl;
			one.pop_back();
			two.pop_back();
			three.pop_back();
		}
	}
	else {
		cout << 0 << endl;
	}
	return 0;
}