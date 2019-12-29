#include<bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i <= b ; i++)
#define fastio ios::sync_with_stdio(0); cin.tie(0);

typedef long long ll;

using namespace std;

long long int traingle(ll n)
{
    return (n * (n+1)) / 2;
}

int main()
{
    fastio
    int t;
    cin >> t;
    while(t--)
    {
        int n ;
        cin >> n;
        if(n==1) cout << 3 << endl;
        else {
            for(ll i = 1; true; i++)
            {
                long long int val = traingle(i);
                int count = 0;

                for(int j = 1; j*j<=val; j++)
                {
                    if(val % j == 0)
                        count++;
                }

                count *= 2;

                if(count > n)
                {
                    cout << val << endl;
                    break;
                }
            }
        }

    }
    return 0;
}