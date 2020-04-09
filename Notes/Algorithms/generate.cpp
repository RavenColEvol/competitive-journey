#include<bits/stdc++.h>
using namespace std;

int main()
{
    char arr[] = {'a', 'b', 'c'};
    int N = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0; i < (1<<N); i++) {
        for(int j = 0; j < N; j++) {
            if(i & (1<<j)) {
                cout << arr[j] << ' ';
            }
        }
        cout << '\n';
    }

    return 0;
}