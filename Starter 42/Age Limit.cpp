#include<iostream>

using namespace std;

int main(){
    int x, y, z, t;
    cin>>t;

    while(t--){
        cin>>x>>y>>z;
        if(z>=x&&z<y){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}