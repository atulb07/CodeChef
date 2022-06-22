#include<iostream>

using namespace std;

int main(){
    int t, a, b;
    cin>>t;
    
    while(t--){
        cin>>a>>b;
        cout<<(a/10)*b<<endl;
    }

    return 0;
}