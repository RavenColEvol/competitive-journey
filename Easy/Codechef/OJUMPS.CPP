#include <iostream>
using namespace std;

int main() {
	long long int a;
    while(cin>>a){
    	
    	if(a%6==0||a%6==3||a%6==1)
    	cout<<"yes"<<endl;
    	else
    	cout<<"no"<<endl;
    	
    }
	return 0;
}