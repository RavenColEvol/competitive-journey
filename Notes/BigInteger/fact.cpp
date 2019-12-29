#include <iostream>
#include <vector>
 
int main(){
    int n ;
    std::cin >> n ;
    std::vector <int> ans ;
    ans.push_back(1) ;
    std::vector <int> :: iterator itr ;
 
    for(int i = 2 ; i <= n ; i++){

        for(itr = ans.begin() ; itr != ans.end() ; itr++)
            *itr *= i ;
        
        for(int j = 0 ; j < ans.size() ; j++)
            if(ans[j] >= 10){
                if(j == ans.size() - 1)
                    ans.push_back(0) ;
                ans[j+1] = ans[j+1] + (ans[j]/10) ;
                ans[j] = ans[j]%10 ;
            }
    }
 
    for(int i = ans.size() - 1 ; i > -1 ; i--)
        std::cout << ans[i] ;
}