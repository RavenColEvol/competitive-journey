#include<bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i <= b ; i++)
#define fastio ios::sync_with_stdio(0); cin.tie(0);

typedef long long ll;

using namespace std;

bool isSorted(int arr[], int n)
{
	REP(i, 0, n - 2) {
		if(arr[i+1] < arr[i]) {
			return false;
		}	
	}

	return true;
}

int main()
{
	fastio
	int n;
	cin >> n;
	int arr[n];
	REP(i, 0, n-1)
	{
		cin >> arr[i];
	}
	if( isSorted(arr, n) ) {
		cout << "yes" << '\n';
		cout << 1 << ' ' << 1 << '\n';
	}
	else{
		int L = 1, R = n - 1;
		bool flag = 0;
		REP(i, 0, n-1){
			if(arr[i+1] < arr[i])
			{
				L = i;
				flag = 1;
				break;
			}
		}

		REP(i, L, n-1){
			if(flag && arr[i+1] > arr[i])
			{
				R = i;
				break;
			}
		}
		reverse(arr+L,arr+R+1);
		if(isSorted(arr,n)){
			cout << "yes\n";
			cout << L + 1 << " " << R + 1 << endl;
		}
		else {
			cout << "no\n";
		}
	}
	
	return 0;
}