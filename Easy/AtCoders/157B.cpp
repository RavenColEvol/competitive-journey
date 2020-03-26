#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;
typedef long long ll;

void findandmark(vector<vector<int>>& arr, int num) {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(arr[i][j] == num) {
                arr[i][j] = 0;
                return;
            }
        }
    }
}

bool bingo(vector<vector<int>> arr) {
    // row wise check
    for(int i = 0; i < 3 ; i++) {
        if(arr[i][0] == 0 && arr[i][1] == 0 && arr[i][2] == 0) {
            return true;
        }
        if(arr[0][i] == 0 && arr[1][i] == 0 && arr[2][i] == 0) {
            return true;
        }
    }

    if(arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[1][1] == 0) return true;

    if(arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0] && arr[1][1] == 0) return true;

    return false;
}

int main()
{
	FIO
	vector<vector<int>> arr(3, vector<int>(3,0));
	for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            cin >> arr[i][j];

    int q, temp; cin >> q;
    while(q--) {
        cin >> temp;
        findandmark(arr, temp);
    }

    cout << (bingo(arr)?"Yes":"No") << '\n';

	return 0;
}