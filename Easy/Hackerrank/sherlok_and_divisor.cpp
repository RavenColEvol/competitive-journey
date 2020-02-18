#include<iostream>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int count = 0;
        if(n%2==0) {
            count += 1;
            for(int i = 2; i*i <= n; i++) {
                
                if( i % 2 == 0){
                    if(n % i == 0)
                        count++;
                }
                if( (n/i)%2 == 0 && (n/i)>i){
                    if(n % (n/i) == 0)
                        count++;
                }
            }
        }
        cout << count << endl;        
    }
    return 0;
}