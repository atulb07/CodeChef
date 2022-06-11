//Passed
#include<iostream>

using namespace std;

int main(){
    int t, x, y, z;
    cin>>t;

    while(t--){
        cin>>x>>y;
        z = x-y;
        if(z>=0){
            cout<<z<<endl;
        }else{
            cout<<0<<endl;
        }
    }

    return 0;
}