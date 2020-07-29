#include<bits/stdc++.h>
using namespace std;

int n, m, cnt = 0, ansx = INT_MAX, ansy = INT_MAX;
int arr[101][101];

// directions
int x[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int y[] = {-1, 0, 1, -1, 1, -1, 0, 1};

bool inside(int row, int col) {
    if(row < 0 || col < 0 || row == n || col == m) return false;
    return true;
}

int main()
{
    cin >> n >> m;

    // INPUT
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> arr[i][j];
    
    // COUNT
    for(int i = 0; i < n ; i++){
        for(int j = 0; j < m; j++) {

            if(i == 0 && j == 0) continue;

            if( arr[i][j]) {
                int temp = 0;
                for(int k = 0; k < 8; k++) {
                    int X = i + x[k], Y = j + y[k];
                    if(inside(X, Y) && arr[X][Y] == 1) 
                        temp++;
                }
                
                if(temp > cnt) {
                    cnt = temp;
                    ansx = i , ansy = j ;
                } else if(temp == cnt) {
                    if(ansx + ansy > i + j)
                        ansx = i , ansy = j;
                }
            }

        }
    }

    cout << ansx + 1 << ':' << ansy + 1 << ':' << cnt ;
    
	return 0;
}

/* 
TEST CASES
2 9
1 0 1 1 0 1 1 1 1
0 0 0 1 0 1 0 0 1

Output:
1:7:3
*/