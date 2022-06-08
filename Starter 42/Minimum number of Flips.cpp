#include<iostream>

using namespace std;

int main(){
    int t, n, ele, total;
    cin>>t;

    while(t--){
        cin>>n;
        total =0;

        for(int i=0; i<n; i++){
            cin>>ele;
            if(ele>0){
                total++;
            }else{
                total--;
            }
        }
        
        if(n%2==0){
            if(total>0){
                cout<<total/2<<endl;
            }else{
                cout<<-total/2<<endl;
            }
        }else{
            cout<<-1<<endl;
        } 
           
    }

    return 0;
}
