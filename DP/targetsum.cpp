#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef long long ll;

int gd(int arr[], int diff, int n)
{
    if(diff == 0) return 1;
    if(n == 0) return 0;

    return gd(arr, diff - arr[n-1], n-1) + gd(arr, diff, n-1);
}

int main()
{
	FIO;
	int arr[] = {1, 1, 1, 1, 1};
    int target = 3;
    int n = sizeof arr / sizeof arr[0];
    int s = accumulate(arr, arr + n, 0);
    target = (target + s)/2;
	cout << gd(arr, target, n) << '\n';
	return 0;
}