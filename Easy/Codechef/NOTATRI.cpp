#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, input;
    cin >> n;
    while(n) {
        vector<int> l;
        for(int i = 0; i < n; i++) {
            cin >> input;
            l.push_back(input);
        }
        sort(l.begin(), l.end());
        int count = 0, i, j;
        for(int k = n-1; k > 1; k--) {
            i = 0;
            j = k-1;
            while(i < j) {
                if(l[i] + l[j] < l[k]) {
                    count += j-i;
                    i++;
                } else  j--;
            }
        }
        cout << count << '\n';
        cin >> n;
    }
    return 0;
}