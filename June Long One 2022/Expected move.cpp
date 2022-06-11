//Passed
#include<iostream>

using namespace std;

int main(){
    long long t, a, b;
    cin>>t;

    while(t--){
        cin>>a>>b;
        cout<<a*(a-1)+(b-a)*(a-1)*2<<endl;
    }

    return 0;
}