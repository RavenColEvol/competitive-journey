#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    long long t , n ,  m , k, ans;

    cin >> t;

    while(t--){
        cin >> n;
        vector<long long> arr(n);
        cin >> arr[0];
        ans = 1;

        for(int i = 1; i < n; i++){

            cin >> arr[i];
            if(arr[i] <= arr[i - 1]) ans++;     
            else arr[i] = arr[i - 1];          

        }

        cout << ans << "\n";
    }

    return 0;
}