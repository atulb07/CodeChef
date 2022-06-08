#include<iostream>

using namespace std;

int main(){
    int x, y, t;
    cin>>t;

    while(t--){
        cin>>x>>y;
        if((x+y)%2==0){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}