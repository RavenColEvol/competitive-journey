#include<bits/stdc++.h>
using namespace std;

struct Point {
	int x;
	int y;
};


int main()
{
	struct Point p[2];
	for(int i = 0; i < 2 ; i++)
		cin >> p[i].x >> p[i].y;
	
	if(p[0].x == p[0].y && p[1].x == p[1].y)
	{
		cout << p[0].x << ' ' << p[1].y << ' ';
		cout << p[1].x << ' ' << p[0].y << '\n';
	}
	else {
		
	}

	return 0;
}