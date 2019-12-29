#include<iostream>

using namespace std;

int crimes, hired;

int main()
{
	int n;
	cin >> n;
	for(int i = 0; i < n ;i++){
		int temp;
		cin >> temp;
		if(temp == -1 && hired == 0)
			crimes++;
		else if(temp>0)
			hired += temp;
		else
			hired--;
	}
	cout << crimes << '\n';

	return 0;
}