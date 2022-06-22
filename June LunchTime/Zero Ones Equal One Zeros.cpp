#include<iostream>

using namespace std;

int main(){
    int t, n, temp;
    cin>>t;

    while(t--){
        cin>>n;
        temp = 0;
        for(int i=0; i<n; i++){
            if(i!=n/2){
                if(temp==0){
                    temp=1;
                }else{
                    temp=0;
                }
            }

            if(i==n/2 && n%2!=0){
                if(temp==0){
                    temp=1;
                }else{
                    temp=0;
                }
            }

            cout<<temp;

        }
        cout<<endl;
    }

    return 0;
}