 #include <iostream>

using namespace std;

int main()

{

    int a;

    string sol="Poor Alex\n";

    cin>>a;

    for(int i=0;i<a;i++){

        int in1,in2;

        cin>>in1>>in2;

        if(in2>in1)sol="Happy Alex\n";

    }

    cout<<sol;

    return 0;

}