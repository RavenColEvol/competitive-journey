#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef long long ll;


int main()
{
	FIO;
    ll arr[3];
    for(int i = 0; i < 3; i++) cin >> arr[i];
    ll result = (arr[0] + arr[1] + arr[2]) / 3;
    sort(arr, arr + 3);
    if(arr[0] + arr[1] < result) {
        result = arr[0] + arr[1];
    }
    cout << result << '\n';
	return 0;
}