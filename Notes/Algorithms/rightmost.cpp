#include<iostream>
#define endl '\n'
using namespace std;

int main()
{
    int N = 7;
    for(int i = 1; i < 32; i<<=1) {
        N = (N | (N>>i));
    }
    cout << ((N+1)>>1) << endl;
    return 0;
}