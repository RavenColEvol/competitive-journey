#include <bits/stdc++.h>
using namespace std;

int main() {
	//FAST IO
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL); 
	cout.tie(NULL);
	
	// your code goes here
	int n;
	int x1, y1,  x2, y2,  x3, y3;
	int count=0;
	
	cin >> n;
	
    while(n--)
    {
        cin >> x1 >> y1 >>  x2 >> y2 >> x3 >> y3; 
                
        vector<int> sides;
        
        sides.push_back( pow(x1-x2,2) + pow(y1-y2, 2) );
        sides.push_back( pow(x1-x3,2) + pow(y1-y3, 2) );
        sides.push_back( pow(x3-x2,2) + pow(y3-y2, 2) );
        
        sort(sides.begin(), sides.end());

        if(sides[0] + sides[1] == sides[2])
            count++;
    }
    
    cout << count;
	
	return 0;
}
