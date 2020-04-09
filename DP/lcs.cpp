#include<bits/stdc++.h>
using namespace std;

int top(string a, string b, int m, int n) {
    if(m < 0 || n < 0) return 0;

    if(a[m] == b[n]) return top(a,b,m-1,n-1) + 1;
    
    return max(top(a,b,m-1,n), top(a,b,m,n-1));
}

int main()
{
    string a = "abcbab", b ="acab";
    cout << top(a,b,a.size()-1,b.size()-1) << endl;
    return 0;
}