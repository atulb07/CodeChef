#include<iostream>

using namespace std;

int main(){
    int t, x, y, z;
    cin>>t;

    while(t--){
        cin>>x>>y>>z;
        cout<<(y-x)/z<<endl;
    }

    return 0;
}