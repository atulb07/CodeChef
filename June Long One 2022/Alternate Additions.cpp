//Passed
#include<iostream>

using namespace std;

int main(){
    long long t, a, b, diff;
    cin>>t;

    while(t--){
        cin>>a>>b;
        diff = (b-a)%3;
        
        if(diff == 0 || diff == 1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}