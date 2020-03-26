#include<bits/stdc++.h>
#define flashio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef long long ll;

int n, q, temp;
vector<int> arr;
vector<int> ft(100005);

int get(int index) {
    int sum = 0;
    while(index) {
        sum += ft[index];
        index -= (index & -index);
    }
    return sum;
}

int query(int t, int l, int r) {
    if(t == 1) return (r - l + 1) - ( get(r) - get(l-1) );
    else return get(r) - get(l-1); 
}

void update(int index, int val) {
    while(index <= n) {
        ft[index] += val;
        index += (index & -index);
    }
}

void build() {
    for(int i = 1; i <= n; i++) {
        update(i, arr[i-1]&1);
    }
}

int main()
{
	flashio;
	cin >> n ;
    for(int i = 1; i <= n; i++) {
        cin >> temp;
        arr.push_back(temp);
    }

    build();

    cin >> q;
    
    while(q--)
    {
        int x, y, z; cin>> x >> y >> z;
        if(x == 0) {
            if(arr[y-1] & 1 && z % 2 == 0){
                update(y, -1);
                arr[y-1] = z;
            }
            else if(arr[y-1] % 2 == 0 && z & 1) {
                update(y, 1);
                arr[y-1] = z;
            }
        } 
        else cout << query(x, y, z) << '\n';
    }

	return 0;
}