#include<iostream>
/**
 * Lesson 1
 * Purpose: Trick to calculate a^n with O(logn) complexity

 */

using namespace std; 

long long binpow( long long a, long long b );

int main()
{
    long long a = 3;
    long long n = 13;
    long long res = 1;

    while(n > 0)
    {
        if(n & 1)
            res = res * a;
        a = a * a;
        n >>= 1;
    }

    cout << res;

    return 0;
}

long long binpow( long long a, long long b )    {

    if(b == 0) return 1;
    long long res = binpow(a, b / 2);

    if(b % 2) 
        return res * res * a;
    else  
        return res * res;

}