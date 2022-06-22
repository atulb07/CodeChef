#include<iostream>

using namespace std;

int main(){
    int t, a, b;
    cin>>t;

    while(t--){
        cin>>a>>b;
        if(a%10 == 0){
            a = (a/10)-1;
        }else{
            a = a/10;
        }

        if(b%10 == 0){
            b = (b/10)-1;
        }else{
            b = b/10;
        }

        cout<<abs(a-b)<<endl;
    }

    return 0;
}