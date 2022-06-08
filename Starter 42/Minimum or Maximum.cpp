#include<iostream>

using namespace std;

int main(){
    long long t, n, max=0 , min=0, temp;
    bool flag;
    cin>>t;

    while(t--){
        cin>>n;
        flag = true;
        
        for(long long i=0; i<n; i++){
           cin>>temp;
           if(i==0){
               max=temp;
               min=temp;
           }else{
                if(temp<=min){
                   min=temp;
                } else if (temp>=max){
                   max=temp;
                } else {
                   flag=false;
                }
           }
        }

        if(flag){
            cout<<"YES"<<endl; 
        }else{
            cout<<"NO"<<endl; 
        }
    }

    return 0;
}