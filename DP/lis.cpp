#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef long long ll;

int lis(vector<int> v) {
    if(v.empty())
        return 0;

    vector<int> tail(v.size(), 0);
    int len = 1;

    tail[0] = v[0];

    for(int i = 1; i < v.size(); i++) {
        auto b = tail.begin(), e = tail.begin() + len;
        auto it = lower_bound(b, e, v[i]);

        if(it == e)
            tail[len++] = v[i];
        else 
            *it = v[i];
    }

    return len;
}

int main()
{
	FIO;
	vector<int> arr = { 3, 10, 2, 1, 20};
    cout << lis(arr) << '\n';
	return 0;
}