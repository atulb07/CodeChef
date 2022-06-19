#include<iostream>

using namespace std;

int main(){
    
    int t, a, b, total, batch;
    cin>>t;

    while(t--){
        cin>>a>>b;
        if(a%5==0){
            total = a/5;
        }else{
            total = (a/5)+1;
        }

        if(b%5==0){
            batch = b/5;
        }else{
            batch = (b/5)+1;
        }

        cout<<total-batch<<endl;
    }

    return 0;
}