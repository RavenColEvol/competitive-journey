#include<bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i <= b ; i++)
#define fastio ios::sync_with_stdio(0); cin.tie(0);
#define debug(x) cout << #x << " is " << x << endl;
 
typedef long long ll;
 
using namespace std;
 
int main()
{
    fastio
    int t; cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<long long> arr(n);
        long long yasser = 0LL;

        for(long long& i : arr){
            cin >> i;
            yasser += i;
        }
 
        long long a = numeric_limits<long long>::min(), b = numeric_limits<long long>::min();
        long long counta = 0LL, countb = 0LL;
 
 
        for(int i = 0; i < n-1 ; i++)
        {
            counta += arr[i];
            if(a < counta)
                a = counta;
            if(counta < 0)
                counta = 0;
        }
 
        for(int i = 1; i < n ; i++)
        {
            countb += arr[i];
            if(b < countb)
                b = countb;
            if(countb < 0)
                countb = 0;
        }
 
        if( max(a,b) >= yasser )
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}