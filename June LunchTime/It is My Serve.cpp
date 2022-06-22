#include<iostream>

using namespace std;

int main(){
    int t, a, b;
    cin>>t;

    while(t--){
        cin>>a>>b;
        if(((a+b)/2)%2==0){
            cout<<"Alice"<<endl;
        }else{
            cout<<"Bob"<<endl;
        }
    }

    return 0;
}