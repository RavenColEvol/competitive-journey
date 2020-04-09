#include<iostream>
#define flashio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;

int main()
{
    flashio;
    int t; cin >> t;
    while(t--) {
        int a, b; cin >> a >> b;
        int start = 1, level = 1;
        while(1) {
            if(start >= b) {
                for(int i = 0; i < a; i++) {
                    if(i == a - level - 1  || i == a - (start - b  - 1) ) cout << 'b' ;
                    else cout << 'a';
                }
                break;
            }
            else {
                level += 1;
                start += level;
            }
        }
        cout << '\n';
    }
    return 0;
}