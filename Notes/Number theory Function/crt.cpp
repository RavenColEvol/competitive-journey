#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef long long ll;

int findMinX(int nums[], int rem[], int k) {
    int x = 1;

    while(true) {
        int j = 0;
        for(; j < k; j++) 
            if(x % nums[j] != rem[j]) break;

        if(j == k) return x;

        x++;
    }
    return x;
}

int inv(int a, int p, int m) {
    int res = 1;
    
    while(p > 0) {
        if(p&1) {
            res = (res * a) % m;
        }
        a = (a * a);
        cout << a << ' ' << m << ' ' << a%m <<'\n';
        p >>= 1;
    }
    return res;
}

int crt(int num[], int rem[], int k) {
    int prod = 1;
    for(int i = 0; i < k; i++) 
        prod *= num[i];
    
    int res = 0;
    for(int i = 0; i < k; i++) {
        int pp = prod / num[i];
        cout << rem[i] << ' ' << inv(pp, num[i]-2, num[i]) << ' '<< pp << '\n';
        res += rem[i] * inv(pp, num[i]-2, num[i]) * pp;
    }
    return res % prod;
}

int main()
{
	FIO;
    int num[] = {3, 4, 5};
    int rem[] = {2, 3, 1};
    int k = sizeof(num)/sizeof(num[0]);
    // cout << findMinX(num, rem, k) << '\n';
    // cout << crt(num, rem, k) << '\n';
    cout << inv(15,2, 4) << '\n';
    return 0;
}