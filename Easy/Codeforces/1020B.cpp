#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    vector<int> c(n+1);
    for(int i = 1; i <= n; i++) cin >> c[i];

    for(int i = 1; i <= n; i++) 
    {
        int index = i;
        vector<bool> visited(n+1, 0);
        while(!visited[index]) {
            visited[index] = 1;
            index = c[index];
        }
        cout << index << ' ';
    }

    return 0;
}