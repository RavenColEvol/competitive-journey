#include<bits/stdc++.h>
#define flashio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main()
{
	flashio
	// Your code here
	int a, b;
	bool flag ;
	cin >> a >> b;
	string fav[a], temp;
	for(int i = 0; i < a; i++) {
		cin >> fav[i];
	}
	for(int i = 0; i < b ; i++) {
		cin >> temp;
		if(temp.size() >= 47) {
			cout << "Good" << '\n';
		}
		else {
			flag = 0;
			for(int i = 0; i < a; i++) {
				if(temp.find(fav[i]) != string::npos) {
					flag = true;
					break;
				}
			}
			if(flag)
				cout << "Good" << '\n';
			else
				cout << "Bad" << '\n';
		}
	}
	return 0;
}