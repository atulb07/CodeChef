#include<iostream>

using namespace std;

int main(){
    int x, y, z, t, sum;
    cin>>t;

    while(t--){
        cin>>x>>y>>z;
        sum = (x*5) + (y*10);
        cout<<sum/z<<endl;
    }

    return 0;
}