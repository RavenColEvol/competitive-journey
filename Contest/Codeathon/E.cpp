#include <bits/stdc++.h> 
using namespace std; 
  
int minOperation (vector<int> arr, int n)  
{
    unordered_map<int, int> hash;  
    for (int i=0; i<n; i++) 
        hash[arr[i]]++; 

    int max_count = 0, mv = -1; 
    for(int i : arr) {
        if(max_count < hash[i]) {
            mv = i;
            max_count = hash[i];
        }
    }
    
} 
  
int main() 
{ 
    int n; cin >> n;
    vector<int> arr(n);
    for(int& i : arr) cin >> i;
    arr.push_back(-99);
    vector<int> b;
    for(int i = 0; i < n; i++) {
        if(arr[i] != arr[i+1])
            b.push_back(arr[i]);
    }
    cout << minOperation(b, b.size()) ;
    return 0; 
}  